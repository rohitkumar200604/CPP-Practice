#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter number to be checked: ";
    cin >> num;
    
    if (num > 0){
        cout << num << "is positive" << endl;
    }
    else if (num < 0) {
        cout << num << "is negative" << endl;
    }
    else {
        cout << num << "is zero" << endl;
    }
    return 0;
}