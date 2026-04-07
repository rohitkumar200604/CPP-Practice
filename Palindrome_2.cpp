#include <iostream>
using namespace std;

int isPalindrome(string word){
    string rev_word;
    int n;
    n = word.length();
    for(int i=0; i<n; i++){
        rev_word += word[n-i];
    }

    if(word == rev_word){
        cout << word << " is a Palindrome" << endl;
    }
    else {
        cout << word << " is not a Palindrome" << endl;
    }
    return 0;
}

int main() {
    string word;
    cout << "Enter a word to check: ";
    cin >> word;

    isPalindrome(word);
}