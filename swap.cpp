#include <iostream>
using namespace std;

int main() {
    int num1, num2, temp;
    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter seconf number: ";
    cin >> num2;
    cout << "Before Swapping:" << endl;
    cout << "Number 1: " << num1 << endl;
    cout << "Number 2: " << num2 << endl;
    temp = num1;
    num1 = num2;
    num2 = temp;
    cout << "After Swapping:" << endl;
    cout << "Number 1: " << num1 << endl;
    cout << "Number 2: " << num2 << endl;
    return 0;  
}