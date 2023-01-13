int SumOfNumbers(int num){
    if(num <= 1) return num;

    return num + SumOfNumbers(num - 1);
}
