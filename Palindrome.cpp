#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    string str, rev_str;
    cout << "Enter a word: ";
    cin >> str;

    rev_str = str;
    reverse(rev_str.begin(), rev_str.end());

    if(str == rev_str){
        cout << str << " is a Palindrome" << endl;
    }
    else {
        cout << str << " is not a Palindrome" << endl;
    }
    return 0;
}