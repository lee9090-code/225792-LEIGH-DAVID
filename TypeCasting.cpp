#include<iostream>
using namespace std;
int main()
{
    // implicit type casting
    double myNum = 15.5; // initialize a double variable
    int myNewNum; // create a new integer variable
    myNewNum = myNum; // aasign double variable to integer variable (implicit casting)
    cout << myNewNum << endl; // output the new integer variable
    myNewNum = static_cast<int>(myNum); // explicit cast from double to int
    cout << myNewNum; // output the new integer variable
    return 0;

}
