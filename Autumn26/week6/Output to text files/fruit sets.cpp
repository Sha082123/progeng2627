#include <iostream>
#include <fstream>
#include <vector>

int search_vector(std::string s, const std::vector<std::string>& vin) {
    for (int i = 0; i < vin.size(); i++) {
        if (vin[i] == s) {
            return 0;
        }
    }
    return -1;
}

void union_vector(const std::vector<std::string>& vin1, const std::vector<std::string>& vin2, std::vector<std::string>& vout) {
    int out;
    for (std::string item : vin1) {
        out = search_vector(item, vin2);
        if (out == -1) {
            vout.push_back(item);
        }
    }

    for (std::string item : vin2) {
        vout.push_back(item);
    }
}

void intersection_vector(const std::vector<std::string>& vin1, const std::vector<std::string>& vin2, std::vector<std::string>& vout) {
    int out;
    for (std::string item : vin1) {
        out = search_vector(item, vin2);
        if (out == 0) {
            vout.push_back(item);
        }
    }
}

std::vector<std::string> read_file_to_vector (std::ifstream &infile) {
    std::string tmp;
    std::vector<std::string> output;
    while (infile >> tmp) {
        output.push_back(tmp);
    }
    return output;
}

void write_vector_to_file(std::ofstream &outfile, std::vector<std::string> output) {
    for (std::string item : output) {
        outfile << item << std::endl;
    }
}

int main() {
    std::string file1;
    std::string file2;

    std::cout << "Enter the name for the 2 files" << std::endl;
    std::cin >> file1 >> file2;

    std::ifstream infile1;
    std::ifstream infile2;

    infile1.open(file1);
    infile2.open(file2);

    std::vector<std::string> data1 = read_file_to_vector(infile1);
    std::vector<std::string> data2 = read_file_to_vector(infile2);

    std::vector<std::string> v_union;
    std::vector<std::string> v_intersection;


    union_vector(data1, data2, v_union);
    intersection_vector(data1, data2, v_intersection);

    infile1.close();
    infile2.close();

    std::ofstream outfile1;
    std::ofstream outfile2;

    outfile1.open("union.txt");
    outfile2.open("intersection.txt");

    write_vector_to_file(outfile1, v_union);
    write_vector_to_file(outfile2, v_intersection);

    outfile1.close();
    outfile2.close();
}