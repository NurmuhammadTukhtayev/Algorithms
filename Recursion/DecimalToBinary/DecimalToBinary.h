#include<string>

std::string DecimalToBinary(int decimal, std::string result = ""){
    if(decimal == 0) return result;

    result = char(decimal % 2 + '0') + result;

    return DecimalToBinary(decimal/2, result);
}

