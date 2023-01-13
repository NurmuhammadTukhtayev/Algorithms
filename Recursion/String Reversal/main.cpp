#include<fstream>
#include"StringReversal.h"

int main(){
    std::fstream fs;
    std::string s;
    fs.open("./io/input.txt", std::fstream::in);
    fs>>s;
    fs.close();

    fs.open("./io/output.txt", std::fstream::out);
    fs<<reverseStriing(s)<<'\n';
}