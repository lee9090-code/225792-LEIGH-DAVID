// A program to demonstrate use of ternary operator
#include <iostream>
#include <string>
using namespace std;
int main(){
    int age;
    cout<<"Enter the age of the child: ";
    cin >> age ;
    //Using ternary operator to check admission eligibilty
    string message = (age>= 4) ? "Admitted to school." : "Declined: Not admitted to school.";
    cout << message << endl;
    return 0;   
}