// Simple admission app using switch case
#include<iostream>
using namespace std;

int main(){
    int option;
    cout << "Welcome to the Admission Application System" << endl;
    cout << "Please select your interests:" << endl;
    cout << "\n1.soccer,\n2.art,\n3.music , \n4.athletics" << endl;
    cout << "Enter your option (1-4): ";
    cin >> option;

    switch(option){
        case 1:
            cout << "You have selected soccer." << endl;
            cout << "Assign to soccer play group." << endl;
            break;

        case 2:
            cout << "You have selected art." << endl;
            cout << "Assign to Art play group." << endl;
            break;

        case 3:
            cout << "You have selected music." << endl;
            cout << "Assign to music play group." << endl;
            break;

        case 4:
            cout << "You have selected athletics." << endl;
            cout << "Assign to athletics play group." << endl;
            break;

        default:
            cout << "Invalid input. Please enter a number between 1 and 4." << endl;
    }