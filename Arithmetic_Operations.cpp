#include <iostream>
using namespace std;

int main() {
    float num1,num2,sum,diff,prod,quo,avg;
    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;
    sum = num1 + num2;
    cout << "Sum is: " << sum << endl;
    diff = num1 - num2;
    cout << "Difference is: " << diff << endl;
    prod = num1*num2;
    cout << "Product is: " << prod << endl;
    quo = num1/num2;
    cout << "Quotient is: " << quo << endl;
    avg = sum/2;
    cout << "Average is: " << avg << endl;
    return 0;
}