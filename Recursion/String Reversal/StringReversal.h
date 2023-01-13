#include <string>
std::string reverseStriing(std::string s){
    // base case
    if(s == "") return s;

    // what is thes smallest amount of work I can do in each iteration
    return reverseStriing(s.substr(1)) + s[0];
}
