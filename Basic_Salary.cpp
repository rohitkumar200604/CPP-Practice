#include <iostream>
using namespace std;

int main() {
    float basic_sal, HRA, TA, Total_Sal, Tax, Net_Sal;
    cout << "Enter Basic Salary: ";
    cin >> basic_sal;
    HRA = basic_sal*0.1;
    TA = basic_sal*0.05;
    Total_Sal = basic_sal + HRA + TA;
    Tax = Total_Sal*0.02;
    Net_Sal = Total_Sal - Tax;
    cout << "HRA: " << HRA << endl;
    cout << "TA: " << TA << endl;
    cout << "Total Salary: " << Total_Sal << endl;
    cout << "Professional Tax: " << Tax << endl;
    cout << "Salary after deductions: " << Net_Sal << endl;
    return 0;
}