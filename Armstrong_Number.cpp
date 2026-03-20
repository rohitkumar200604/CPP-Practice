#include <iostream>
using namespace std;

int main() {
    int num, sum=0, rem, res, temp;
    cout << "Enter a number to check for Armstrong number: ";
    cin >> num;
    temp = num;

    while (temp!=0) {
        rem = temp%10;
        res = rem*rem*rem;
        sum += res;
        temp = temp/10;
    }
    
    if (sum == num) {
        cout << num << " is an Armstrong Number" << endl;
    }
    else {
        cout << num << " is not an Armstrong Number" << endl;
    }
    return 0;
}