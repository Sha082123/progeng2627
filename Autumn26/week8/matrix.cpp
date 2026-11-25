#include <iostream>
#include <vector>

int main() {
    std::vector<std::vector<double>> out;
    std::vector<std::vector<double>> matrix1 = {{1,2,3}, {4,5,6}, {7,8,9}};
    std::vector<std::vector<double>> matrix2 = {{1,2,3}, {4,5,6}, {7,8,9}};

    int n_row = 3;
    int n_column = 3;

    for (int r = 0; r < n_row; r++) {
        std::vector<double> tmp_row = {};
        for (int c = 0; c < n_column; c++) {
            tmp_row.push_back(matrix1[r][c] * matrix2[r][c]);
        }
        out.push_back(tmp_row);
    }

    for (int r = 0; r < out.size(); r++) {
        for (int c = 0; c < out[r].size(); c++) {
            std::cout << out[r][c] << " ";
        }
        std::cout << std::endl;
    }
}