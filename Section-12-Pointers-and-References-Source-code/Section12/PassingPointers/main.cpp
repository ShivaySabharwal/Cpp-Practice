// Section 12
// Passing Pointers 1
#include <iostream>

using namespace std;


void double_data(int *int_ptr) {
   *int_ptr *= 2;	
}

int main() {
    int value {10};
    int *int_ptro {nullptr};
    
    cout << "Value: " << value << endl;
    double_data(&value);
    cout << "Value: " << value << endl;

    cout << "-----------------------------" << endl;
    int_ptro = &value;
    double_data(int_ptro);
    cout << "Value: " << value << endl;

    cout  << endl;
    return 0;
}