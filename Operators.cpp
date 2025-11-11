#include<iostream>
using namespace std;
int main()
{
     //variable declaration
     int num1 = 16 , num2 = 4;

     //ARITHMETIC/ MATHEMATICAL OPERATORS
     cout << "Addition: " << num1 << " + " << num2 << " = " << num1 + num2 << endl; // 5+3=8
     cout << "Subtraction: " << num1 << " - " << num2 << '=' << num1 - num2 << endl;
     cout << "multiplication:" << num1<< "*" << num2 << '=' << num1 * num2 << endl;
     cout << "Division:" << num1 << "/" << num2 << '=' << num1 / num2 << endl;
     cout << "modulus:" << num1 << "%" << num2 << '=' << num1 % num2 << endl;
     cout << "increment: ++" << num1 << '=' << ++num1 << endl; //pre-increment
     cout <<"increment:" << num1++ << '=' << num1++ << endl; //post-increment
     cout<<"decrement: --" << num2 << '=' << --num2 << endl; //pre-decrement
        cout<<"decrement: " << num2-- << '=' << num2-- << endl; //post-decrement
        cout << "combined increment and assignment: num1 += num2 -> " << (num1 += num2) << endl;
        cout << "combined decrement and assignment: num1 -= num2 -> " << (num1 -= num2) << endl;
        cout << "combined multiplication and assignment: num1 *= num2 -> " << (num1 *= num2) << endl;
        cout << "combined division and assignment: num1 /= num2 -> " << (num1 /= num2) << endl;

//COMPARISON/LOGICAL OPERATORS
cout << "3>2" << "=" << (3 > 2) << endl;
cout << "3<2" << "=" << (3 < 2) << endl;
cout << "4>=3" << "=" << (4 >= 3) << endl;
cout << "4<=3" << "=" << (4 <= 3) << endl;
cout << "3==3" << "=" << (3 == 3) << endl;
cout << "!(4>=3)" << "=" << !(4 >= 3) << endl;

 //Boolean Operators ( and && , or || )
 cout << "true && false = " << (( 3 > 2) && (4 >= 2)) << endl;
 cout << "true && false = " << ((3 > 2) && (4 <= 2)) << endl;
 cout << " false $$ false = " << ((3 < 2) || (4 >= 2)) << endl;

 //Boolean Or
    cout << " false || false = " << ((3 > 2) || (4 >= 2)) << endl;
    cout << " false || false = " << ((3 < 2) || (4 <= 2)) << endl;
    cout << "false || false = " << ((3 < 2) || (4 >= 2)) << endl; 

    // Pointer Operators

    // Ternary Operator 