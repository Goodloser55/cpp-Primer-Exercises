#include <iostream>

int main() {
    int num1, num2;
    std::cout << "Enter two numbers so i can display all the numbers between the two (Start with the smaller number):" << std::endl;
    std::cin >> num1 >> num2;
    std::cout << "The numbers between " << num1 << " and " << num2 << " are: " << std::endl;
    while (num1 <= num2){
        std::cout << num1 + 1 << " ";
        num1++;
    }
return 0;
}