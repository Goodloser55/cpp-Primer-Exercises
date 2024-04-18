#include <iostream>

int main(){
    int val, sum;
    val = 50;
    sum = 0;
    while(val <= 100) {
        sum += val;
        val++;
    }
    std::cout << "The sum of 50-100 is:" << sum << std::endl;
}