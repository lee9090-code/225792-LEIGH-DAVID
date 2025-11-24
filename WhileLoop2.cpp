// Simple program that outputs numbers 12, 14, 16, 18, 20, 22, 24, 26 and 28 using while loop
#include <iostream>
using namespace std;
int main() {
    int num = 12;
    cout << " The numbers are even numbers:" << " ";
    while (num <= 28) {
        cout << num << ",";
        num += 2;
    }
    return 0;
}



