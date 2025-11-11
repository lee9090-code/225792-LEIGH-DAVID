//simple program for showing the profile of a user
#include<iostream>
using namespace std;
int main()
{
    cout << "------------------Profile---------------------------------------" << endl;
    // first name, second name, last name, full name, nickname, favourite meal, favourite movie, why am I in this class
    string profile;
    cout<< "user profile creation"<< endl;                                   "---\n";
    string name;
    cout << "First Name:\n";
    getline(cin , name);
    string secondname;
    cout << "second name\n";
    getline (cin , secondname);
    string lastname;
    cout << "Last Name:\n";
    getline (cin , lastname);
string fullname;
cout << " full name:\n";
    cout << "Enter your fullname:\n";
    getline(cin, fullname);
string nickname;
cout << "Nickname:\n";
getline(cin , nickname);
string favouritemeal;
cout << "Favourite Meal:\n";    
getline (cin , favouritemeal);
string favouritemovie;
cout << "Favourite Movie:\n";
getline (cin , favouritemovie);
string whyinthisclass;
cout << "Why am I in this class?:\n";
getline (cin , whyinthisclass);
cout <<"---------------------------------------------------------------------"<<endl;
return 0;
}


