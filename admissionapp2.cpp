//simple admission application
#include<iostream>
using namespace std;
int main()
{
    int age;
    string interest;
    cout << "Enter the age of the child: ";
    cin >> age;

    if (age >= 4 && age <=10)
    {
        cout << "Enter the child's interest: ";
        cin >> interest;
        if ( interest== "Soccer")
        {
            cout << "Admitted to school." << endl;
            cout << "Assigned to Soccer playgroup." << endl;
        }
        if (interest == "Art")
        {
            cout << "Admitted to school." << endl;
            cout << "Assigned to Art playgroup." << endl;
        }
        else
        {
            cout << "Admitted to school." << endl;
            cout << "Assigned to Other playgroup." << endl;}
        }
        else
        {
            cout << "Declined: Not admitted to school." << endl;

        }
    return 0;

}