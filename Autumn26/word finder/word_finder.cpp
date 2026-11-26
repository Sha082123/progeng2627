#include <iostream>
#include <vector>
#include <string>


std::vector<int> find_words_from_string(std::string &letters, 
                            std::vector<std::string> word_list,
                            std::vector<std::string> &not_found) {

    std::vector<int> output;
    for (int i = 0; i < word_list.size(); i++) {
        for (int a = 0; a < letters.size(); a++) {
            if (letters[a] == word_list[i][0]) {
                bool match = true;
                std::vector<int> positions = {};
                for (int b = 0; b < word_list[i].size() && match == true; b++) {
                    if ((a + b) >= letters.size()) {
                        match = false;
                    } else {
                        if (letters[a+b] != word_list[i][b]) {
                            match = false;
                        } else {
                            positions.push_back(a+b);
                        }
                    }
                }

                if (match) {
                    for (int position : positions) {
                        output.push_back(position);
                    }

                    std::vector<std::string> tmp;

                    for (int i = 0; i < not_found.size(); i++) {
                        if (not_found[i] != word_list[i]) {
                            tmp.push_back(not_found[i]);
                        }
                    }
                    not_found = tmp;
                }
                positions.clear();
            }
        }
    }

    return output;
}


std::vector<std::string> separate_to_columns(std::vector<std::string> input) {
    std::vector<std::string> output;
    for (int c = 0; c < input[0].size(); c++) {
        std::string tmp = "";
        for (int r = 0; r < input.size(); r++) {
            tmp += input[r][c];
        }
        output.push_back(tmp);
    }

    return output;
}



void find_words(
    const std::vector<std::string>& grid, 
    const std::vector<std::string>& words,
    std::vector<std::string>& solution,
    std::vector<std::string>& not_found
) {
    // std::string input = "000000hello00hello00abc00";
    // std::vector<std::string> word_list = {"hello", "abc"};
    // std::vector<int> output = find_words_from_vector(input, word_list);

    // for (int i : output) {
    //     std::cout << i << " ";
    // }

    std::vector<std::string> rows = grid;
    std::vector<std::string> columns = separate_to_columns(grid);

    // for (int c = 0; c < columns.size(); c++) {
    //     std::cout << columns[c] << std::endl;
    // }

    std::vector<std::vector<int>> positions;

    for (int r = 0; r < rows.size(); r++) {
        std::vector<int> indices = find_words_from_string(rows[r], words, not_found);
        for (int c = 0; c < indices.size(); c++) {
            std::vector<int> pos = {r, indices[c]};
            positions.push_back(pos);
        }
    }

    for (int c = 0; c < columns.size(); c++) {
        std::vector<int> indices = find_words_from_string(columns[c], words, not_found);
        for (int r = 0; r < indices.size(); r++) {
            std::vector<int> pos = {indices[r], c};
            positions.push_back(pos);
        }
    }


    for (int r = 0; r < grid.size(); r++) {
        std::string line = "";
        for (int c = 0; c < grid[0].size(); c++) {
            bool found = false;
            for (std::vector<int> pos : positions) {
                if (pos[0] == r && pos[1] == c) {
                    found = true;
                }
            }

            if (found == false) {
                line += "#";
            } else {
                line += grid[r][c];
            }
        }
        solution.push_back(line);
    }


    // for (std::vector<int> pos : positions) {
    //     std::cout << pos[0] << " " << pos[1] << std::endl;
    // }


}


int main() {
    std::vector<std::string> grid = {
        "xappleg",
        "dzeazkg",
        "zwazzbx",
        "dxnqzoy",
        "qyueytp",
        "pythtyg"
    };

    std::vector<std::string> words = {"peanut", "bot", "mango", "apple", "cinnamon"};
    std::vector<std::string> not_found = words;
    std::vector<std::string> solution;

    find_words(grid, words, solution, not_found);

    for (std::string line : solution) {
        std::cout << line << std::endl;
    }

    std::cout << "not found: " << std::endl;
    for (std::string item : not_found) {
        std::cout << item << std::endl;
    }
}