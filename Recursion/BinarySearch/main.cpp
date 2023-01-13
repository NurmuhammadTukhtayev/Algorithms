#include<fstream>
#include<iostream>
#include<assert.h>
#include<vector>
#include"./BinarySearch.h"

int main(int argc, char* argv[]){
    assert(argc > 1 && "Please send the target number as argumnent");
    int target = std::stoi(argv[1]);

    std::fstream fs;

    fs.open("./io/input.txt", std::fstream::in);
    assert(fs.is_open() && "Can not find input file.");

    std::vector<int> nums;

    while(!fs.eof()){
        int num;
        fs>>num;
        nums.push_back(num);
    }

    fs.close();

    int index = BinarySearch(nums, target, 0, nums.size()-1);

    fs.open("./io/output.txt", std::fstream::out);
    if(index == -1) fs<<"Your target number " << target << " is not in file!";
    else fs<<"Your target number " << target << " is in the input file at index " << index << std::endl;


    return 0;
}