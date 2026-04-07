#include <iostream>
using namespace std;

int main() {
    string uname;
    int pass;
    cout << "Enter Username: ";
    cin >> uname;
    cout << "Enter Password: ";
    cin >> pass;

    if (uname == "Admin"){
        if (pass == 123456) {
            cout << "Login Successsful" << endl;
        }
        else {
            cout << "Incorrect Password. Try Again" << endl;
        }
    }
    else {
        cout << "Wrong Username. Try Again" << endl;
    }
    return 0;
}