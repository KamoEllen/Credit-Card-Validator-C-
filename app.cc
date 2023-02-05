#include <iostream>
#include <string>
#include <algorithm> // error code (error: ‘reverse’ was not declared in this scope) ,fixed (from terminal)
using namespace std;

int main()
{
    // Read in the credit card number
    string card_number;
    cout << "Enter the credit card number: ";
    cin >> card_number;

    // Reverse the credit card number
    reverse(card_number.begin(), card_number.end());

    // Sum up the digits of the credit card number
    int sum = 0;
    for (int i = 0; i < card_number.length(); i++)
    {
        // Get the current digit
        int digit = card_number[i] - '0';

        // Double every second digit
        if (i % 2 == 1)
        {
            digit *= 2;
        }

        // Add the digits of the resulting number to the sum
        sum += digit / 10 + digit % 10;
    }

    // Check if the credit card number is valid
    if (sum % 10 == 0)
    {
        cout << "Valid credit card number!" << endl;
    }
    else
    {
        cout << "Invalid credit card number!" << endl;
    }

    return 0;
}
