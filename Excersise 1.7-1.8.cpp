#include <iostream>

/*Ex. 1.7: Compile a program that has incorrectly nested comments*/
int num1;
// /*this declares a storage /*this is a nested comment it cant be done*/space named num 1 able to recieve data with //int as *the type*/

int main() {
std::cout << "/*";
std::cout << "*/";
std::cout << /* "*/" */";
std::cout << /* "*/" /* "/*" */;
}