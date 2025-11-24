// Simple program that counts the number of times a wrong password is entered
#include<iostream>
using namespace std;
int main() {
    string password;
   const string correct_password = " password123";
   int attempts = 3;
   while (attempts <= 3 ){ 
    cout << "Enter Password: ";
    getline( cin, password);
    
    if (password == "password123") {
        cout << " Access Granted" << endl;
        break;

    } else {
        attempts--;
        cout << " Incorrect Password. You have " << attempts << " attempts left." << endl;
        if (attempts == 0) {
            cout << " Access Denied. No attempts left." << endl;
        }
    }
    return 0;
   }
}
