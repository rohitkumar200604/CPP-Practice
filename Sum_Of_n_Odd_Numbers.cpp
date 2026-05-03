#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter number till where sum is required: ";
    cin >> n;
    int sum = 0;
    for (int i = 1; i <= n; i += 2)
    {
        sum += i;
    }
    cout << "Sum of all odd numbers till n: " << sum << endl;
    return 0;
}