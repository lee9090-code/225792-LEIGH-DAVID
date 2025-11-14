//This program calculates the profit based on revenue and cost inputs.
#include <iostream>
using namespace std;    

int main() {
    double buyingPrice, sellingPrice, profit;

    // Ask user for buying price and selling price
    cout << "Enter the buying price of the vehicle: ";
    cin >> buyingPrice;

    //cout << "Enter the selling price of the vehicle: ";
    cout << "Enter the selling price of the vehicle: ";
    cin >> sellingPrice;

    // Calculate profit
    profit = sellingPrice - buyingPrice;

    //Display the profit
    cout << "The profit from the vehicle sale is: $" << profit << "\n";

    return 0;
}
