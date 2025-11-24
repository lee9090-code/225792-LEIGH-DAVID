// simple program to compute the sum of whole numbers from 20 to 25
#include <iostream>
using namespace std;
int main() {
    int sum = 0;
    cout << "The sum of whole numbers from 20 to 25 is: ";
    int x = 20;
    cout << " ";
    while (x <= 25) {
        cout << sum + x << ",";
        sum += x; // Update sum with the current value of x
        x++;
    }   
    return 0;
}
