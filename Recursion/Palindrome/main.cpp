#include<fstream>
#include"Palindrome.h"

int main(){
    std::string s;
    std::fstream fs;
    fs.open("./io/input.txt", std::fstream::in);
    fs>>s;
    fs.close();

    fs.open("./io/output.txt", std::fstream::out);
    fs<<(isPalindrome(s) ? "Your input is palindrome\n" : "It is not a palindrome\n");
    fs.close();
}