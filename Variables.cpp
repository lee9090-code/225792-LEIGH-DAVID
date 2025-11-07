// Exploring different types of variables in C++
#include<iostream>
using namespace std;

// Global variable
int globalVar = 100; /* Variable declared outside of any 
function and accesible from any part of this source file*/

// Example function with parameter variable
void examplefunction(int paramVar) /* Variable declared in the function
parameters using for passing data when a function is called*/
{
      cout << "Parameter Variable; " << paramVar << endl;
        // Local variable
        int localVar = 50; /* Variable declared within the main function
        and accessible only within their function*/

        //contant variable
        const float PI = 3.14; /* Variable whose value cannot be changed*/
        
        //static variable
        static int staticVar = 0; /* Variable that retains its value 
        between function calls*/
        staticVar++;
        cout << "Local Variable: " << localVar << endl;
        cout << "Constant Variable PI: " << PI << endl; 
        cout << "Static Variable: " << staticVar << endl;
}
int main()
{
    cout << "Global Variable: " << globalVar << endl;
    examplefunction(25); // Calling function with argument 25
    examplefunction(50); // Calling function with argument 50
    return 0;
}



