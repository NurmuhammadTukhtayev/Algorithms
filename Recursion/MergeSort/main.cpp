#include<fstream>
#include<iostream>
#include<vector>
#include"./MergeSort.h"

int main(){
    std::fstream fs;
    std::vector<int> nums;
    fs.open("./io/input.txt", std::fstream::in);
    while(!fs.eof()){
        int num;
        fs >> num;
        nums.push_back(num);
    }
    fs.close();

    MergeSort(nums, 0, nums.size()-1);

    fs.open("./io/output.txt", std::fstream::out);
    for(int i = 0; i < nums.size(); i++)
        fs << nums[i]<<' ';

    fs.close();

    return 0;
}