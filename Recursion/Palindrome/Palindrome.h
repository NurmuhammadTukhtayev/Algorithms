#include<string>

bool isPalindrome(std::string s){
    int len = s.size();

    // base case
    if(len <= 1) return true;    

    if(s[0] == s[len-1]) return isPalindrome(s.substr(1, len-2));

    return false;
}

