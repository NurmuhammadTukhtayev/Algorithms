#include<fstream>
#include"Sum.h"

int main(){
    int num;
    std::fstream fs;
    fs.open("./io/input.txt", std::fstream::in);
    fs>>num;

    fs.close();

    fs.open("./io/output.txt", std::fstream::out);
    fs<<SumOfNumbers(num);
}