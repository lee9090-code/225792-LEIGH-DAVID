// simple program using while loop to ask a user for the food they like until they type 'N'
#include <iostream>
using namespace std;

int main() {
    string food;
    
    cout<<"Please enter a food you like(type 'N' to stop): ";
    cin>>food;
while (food != "N" )
{
    cout<<"You like "<<food<<"."<<endl;
    cout<<"Please enter another food you like(type 'N' to stop): ";
    cin>>food;
}
    cout<<"Thank you for sharing your favorite foods!"<<endl;
    return 0;
}