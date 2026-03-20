#include <iostream>
using namespace std;

int main() {
    int pps, eee, maths, phy, chem;
    float agg, percentage;

    cout << "Enter marks of PPS: ";
    cin >> pps;
    cout << "Enter marks of EEE: ";
    cin >> eee;
    cout << "Enter marks of Maths: ";
    cin >> maths;
    cout << "Enter marks of Physics: ";
    cin >> phy;
    cout << "Enter marks of Chemistry: ";
    cin >> chem;
    
    agg = (pps+eee+maths+phy+chem);
    percentage = (agg/500)*100;
    cout << "Aggregate Marks: " << agg << "/500"<< endl;
    cout << "Percentage Obtained: " << percentage << "%" << endl;

    if (percentage >= 40) {
        if (percentage >= 75) {
            cout << "Passed with Distinction" << endl;
        }
        else if (percentage <= 75 && percentage >= 60) {
            cout << "Passed with First Division" << endl;
        }
        else if (percentage <= 60 && percentage >= 50) {
            cout << "Passed with Second Division" << endl;
        }
        else if (percentage <= 50 && percentage >= 40) {
            cout << "Passed with Third Division" << endl;
        }
    } 
    else {
        cout << "Failed" << endl;
    }
    return 0;
}