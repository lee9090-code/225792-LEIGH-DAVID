// BBIT Sem 1 Timetable using switch case
#include <iostream>
using namespace std;

int main(){
    int opt;
    int day;

    cout << "Hi. This is your BBIT Sem 1 Timetable (May-Aug 2024).";
    cout << "\n1.Monday\n2.Tuesday\n3.Wednesday\n4.Thursday\n5.Friday"<<endl;
    cout << "Enter the day number (1-5) to view the timetable: ";
    if ( day < 1 || day > 5 ) {
        cout << "Invalid input. Please enter a number between 1 and 5." << endl;
        return 1;
    }
    cin >> opt;

    switch (opt){
        case 1:
        cout<<"Monday Classes\n....................."<<endl;
        cout<<"\t1.BBIT 1106: Math for Biz"<<endl;
        cout<<"\t2.BBIT 1102: Intro to Programming"<<endl;
        break;

        case 2:
        cout<<"Tuesday Classes\n....................."<<endl;
        cout<<"\t1.BBIT 1102: Intro to Programming"<<endl;
        cout<<"\t2.BBIT 1104: Ethics"<<endl;
        break;

        case 3:
        cout<<"Wednesday Classes\n....................."<<endl;
        cout<<"\t1.BBIT 1106: Math for Biz"<<endl;
        cout<<"\t2.BBIT 1108: Digital Literacy"<<endl;
        break;

        case 4:
        cout<<"Thursday Classes\n....................."<<endl;
        cout<<"\t1.BBIT 1104: Ethics"<<endl;
        cout<<"\t2.BBIT 1108: Digital Literacy"<<endl;
        break;

        case 5:
        cout<<"Friday Classes\n....................."<<endl;
        cout<<"\t1.BBIT 1102: Intro to Programming"<<endl;
        cout<<"\t2.BBIT 1106: Math for Biz"<<endl;
        break;

        default:
        cout<<"Invalid input. Please enter a number between 1 and 5."<<endl;
         return 0;
    }



    
