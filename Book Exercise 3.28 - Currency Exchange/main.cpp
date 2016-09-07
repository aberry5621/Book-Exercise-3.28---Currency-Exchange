//
//  main.cpp
//  Book Exercise 3.28 - Currency Exchange
//
//  Created by ax on 9/7/16.
//  Copyright © 2016 COMP130. All rights reserved.
//

#include <iostream>
using namespace std;

int main() {
    // Title
    cout << "Currency Exchange Calculator \n";
    
    // D
    double exchange_rate = 0.0;
    int conversion_direction = 0;
    double currency_amount = 0.0;
    double converted_amount = 0.0;

    
    // I
    cout << "Enter the exchange rate from USD to RMB: ";
    cin >> exchange_rate;

    cout << "Enter 0 to convert USD to RMB and 1 to convert RMB to USD: ";
    cin >> conversion_direction;
    
    
    // P
    if (conversion_direction == 0) {
        cout << "Enter the amount (USD): ";
        cin >> currency_amount;
        converted_amount = currency_amount * exchange_rate;
        cout << "$" << currency_amount << " is " << converted_amount << " yuan." << endl;
    } else if (conversion_direction == 1) {
        cout << "Enter the amount (HSB): ";
        cin >> currency_amount;
        converted_amount = currency_amount / exchange_rate;
        cout  << currency_amount << " yuan is " << "$" << converted_amount << " USD." << endl;
    } else {
        cout  << "You messed up something, buddy." << endl;
    }
    
    // O
    cout << "OUTPUT HERE " << endl;
    
    return 0;
    
}