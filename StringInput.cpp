//simple program for greeting using user input name
#include<iostream>
using namespace std;
int main() 
{
    string fullname;
    cout << "Enter full name:\n";
    cin >> fullname;

    cout << "Hello" << fullname << " Nice to meet you!" << endl;
     
    // using getline( cin, variable) function
    cout << "Enter your fullname:\n";
    getline(cin, fullname);
    cout << "Hello again" << fullname << " Nice to meet you!" << endl; // using getline function
    return 0; 
}