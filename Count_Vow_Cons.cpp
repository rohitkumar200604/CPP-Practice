#include <iostream>
#include <string>
using namespace std;

int main(){
    string str;
    int len, vow=0, cons=0;
    cout << "Enter String: ";
    getline(cin, str);

    len = str.length();
    for(int i=0; i<len; i++){
        char ch = tolower(str[i]);
        if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u'){
            vow++;
        }
        else if(ch > 'a' && ch <= 'z'){
            cons++;
        }
    }
    cout << "Count Of Vowels: " << vow << endl;
    cout << "Count Of Consonants: " << cons << endl;
    return 0;
}