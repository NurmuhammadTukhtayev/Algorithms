#include<fstream>
#include "./DecimalToBinary.h"

int main(){
    int input;
    std::fstream fs;
    fs.open("./io/input.txt", std::fstream::in);
    fs>>input;
    fs.close();
    
    fs.open("./io/output.txt", std::fstream::out);
    fs<<DecimalToBinary(input)<<"\n";
    fs.close();
    

    return 0;
}