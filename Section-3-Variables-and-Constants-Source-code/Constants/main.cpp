// Section 3
// Constants

/*
    Carpet Cleaning Service
    Charges $30 per room
    Sales tax rate is 6%
    Estimates are valid for 30 days

    Prompt the user for the number of rooms they would like cleaned
    and provide an estimate such as:

Estimate for carpet cleaning service:
Number of rooms: 2
Price per room: $30
Cost: $60
Tax: $3.6
====================================
Total estimate: $63.6
This estimate is valid for 30 days

Pseudocode:
    Prompt the user to enter the number of rooms
    Display number of rooms
    Display price per room

    Display cost:  (number of rooms * price per room)
    Display tax:   number of rooms * price per room * tax rate
    Display total estimate: (number of rooms * price per room) + (number of rooms * price per room * tax rate)
    Display estimate expiration time
*/

#include <iostream>
using namespace std;

int main()
{
    cout << "Hi There!, Welcome to Carpet Cleaning Service." << endl;
    cout << "\nHow many rooms would you like cleaned?" << endl;

    int number_of_rooms{0};
    cin >> number_of_rooms;

    cout << "\nEstimate for Carpet Cleaning Service: -" << endl;
    cout << "Number of rooms:- " << number_of_rooms << endl;

    const int price_per_room{30};
    const double sales_tax{0.06};
    const int estimate_expiry{30};

    cout << "The price per room for our services is :- $" << price_per_room << endl;
    cout << "Therefore, the cost would be:- $" << price_per_room * number_of_rooms << endl;
    cout << "And, Tax:- $" << price_per_room * number_of_rooms * sales_tax << endl;
    cout << "==============================================" << endl;
    cout << "Total Estimate:- $" << (price_per_room * number_of_rooms) + (price_per_room * number_of_rooms * sales_tax) << endl;
    cout << "This estimated cost is valid for " << estimate_expiry << " days" << endl;

    cout << endl;
    return 0;
}