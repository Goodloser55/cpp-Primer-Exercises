#include <iostream>

using namespace std;

int num1, num2;

int main(){
    cout << "Please enter two numbers:"<< endl;
    cin >> num1 >> num2;
    cout << "The product of " << num1;
    cout << " and " << num2;
    cout << " is " << num1 * num2 << "." << endl;
    return 0;
}
/*Explain whether the following code fragment is legal:
*std::cout << "the sum of " << num1;
*        << " and " << num2;
*        << " is " << num1 * num2 << std::endl;
*        
*If the program is legal, what does it do? If the program is not legal, why *not? How would you fix it?
*
*The program is not legal because the following << operator on lines 22 and 23 *are missing an ostream, the previous line ends with a ";" effectively closing *that line off and making the other lines invalid. If we add cout to the *beginning of each line it would fix it, however i would prefer the speedier *approach of just removing the semicolons from lines 21 and 22 while *maintaining the line wrap, ex.
*std::cout << "the sum of " << num1
*        << " and " << num2
*        << " is " << num1 * num2 << std::endl;
*/