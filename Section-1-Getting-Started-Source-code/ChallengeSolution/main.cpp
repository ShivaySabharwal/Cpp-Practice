#include <iostream>

using namespace std;

int main(){
    int num{0};
    cout << "Enter your favorite number between 1 and 100: ";
    cin >> num;
    cout << "Amazing! That's my favorite number too." << "\nNo really!!, " << num << " is my favorite number.";
    
    return 0;
}