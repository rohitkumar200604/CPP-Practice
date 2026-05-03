#include <iostream>
using namespace std;

int main()
{
    float P, R, T;
    cout << "Enter Principal Amount:";
    cin >> P;
    cout << "Enter Rate Of Interest:";
    cin >> R;
    cout << "Enter Time Period:";
    cin >> T;

    float SI = (P * R * T) / 100;
    cout << "Simple Interest is:" << SI << endl;
    return 0;
}