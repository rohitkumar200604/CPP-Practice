#include <iostream>
using namespace std;

int isPrime(int num){
    int rem, res=1;
    for(int i=2; i<num; i++){
        if(num%i == 0){
            res = 0;
            break;
        }
    }
    return res;
}

int main(){
    int num,res;
    cout << "Enter a number to check: ";
    cin >> num;

    res = isPrime(num);

    if(res == 1){
        cout << num << " is a Prime Number" << endl;
    }
    else {
        cout << num << " is not a Prime Number" << endl;
    }
    return 0;
}