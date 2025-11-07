//Calculator program performs arithmetic operations
#include<iostream> // mathematical functions such as square root,power, modulas, addition, subtraction, multipication, division
#include <cmath>
using namespace std;
int main() {
    double num1, num2;
   cout<< "enter first number: ";
    cin >> num1;
   cout<< "enter second number: ";
    cin >> num2;
    char operation; // square root=sqrt, power=pow, modulus=fmod , sum= + , difference= - , product= * , division= /
cout<<      "sum of two numbers is: " << num1 + num2 << endl;
cout<<      "difference of two numbers is: " << num1 - num2 << endl;
cout<<      "product of two numbers is: " << num1 * num2 << endl;
cout<<      "Square root of first number is: " << sqrt(num1) << endl;
cout<<      "first number raised to the power of second number is: " << pow(num1, num2) << endl;
cout<<      "modulus of two numbers is: " << fmod(num1, num2) << endl;
cout<<      "division of two numbers is: " << num1 / num2 << endl;
cout<<      "You've done a fantastic job!" << endl;
    return 0;
}
