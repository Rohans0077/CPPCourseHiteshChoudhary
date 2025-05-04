// modify tea prices create a program where the user inputs a base price for tea. Use typecasting to increase the price of tea by 10% and display the rounded new price using explicit casting

#include <iostream>
using namespace std;

int main() {
    float basePrice;
    cout << "Enter the base price of tea: ";
    cin >> basePrice;

    // Increase price by 10%
    float increasedPrice = basePrice * 1.10;
	cout<<increasedPrice<<"\n";
	cout<< increasedPrice + 0.5<<"\n";

    // Round the new price using explicit typecasting
    int roundedPrice = int(increasedPrice + 0.5); // round to nearest integer

    cout << "New tea price after 10% increase (rounded): " << roundedPrice << endl;

    return 0;
}
