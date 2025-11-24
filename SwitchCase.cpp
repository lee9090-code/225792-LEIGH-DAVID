//Simple pre-school admissions program using switch case
#include <iostream>
using namespace std;
int main(){
    int age;
    if (age >= 4 && age <= 10){
        cout << "Welcome to the Pre-School Admission Program!" << endl;
        cout << "Please select the activity you are interested in:" << endl;
        cout << "1. Soccer" << endl;
        cout << "2. Art" << endl;
        cout << "3. Music" << endl;
        cout << "4. Athletics" << endl;
        cout << "Enter your choice (1-4): ";
        int choice;
        cin >> choice;
        switch(choice){
            case 1:
                cout << "You have selected Soccer. Assigned to the Soccer play group." << endl;
                break;
            case 2:
                cout << "You have selected Art. Assigned to the Art play group." << endl;
                break;
            case 3:
                cout << "You have selected Music. Assigned to the Music play group." << endl;   
                break;
            case 4:
                cout << "You have selected Athletics. Assigned to the Athletics play group." << endl;   
                break;
            default:
                cout << "Invalid input. Please enter a number between 1 and 4." << endl;
        return 0;

    }
}
}