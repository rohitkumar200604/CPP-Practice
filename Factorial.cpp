#include <iostream>
using namespace std;

int main(){
    int num, fact=1;
    cout << "Enter number for its factorial: ";
    cin >> num;

    if(num == 0){
        fact = 1;
    }
    else {
        for(int i=1; i<=num; i++){
            fact *= i;
        }
    }

    cout << "Factorial is: " << fact << endl;
    return 0;
}