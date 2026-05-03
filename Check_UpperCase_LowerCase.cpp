#include <iostream>
using namespace std;

int main()
{
    char ch;
    cout << "Enter character: ";
    cin >> ch;

    if (ch >= 'A' && ch <= 'Z')
    {
        cout << "Given Character is UpperCase" << endl;
    }
    else if (ch >= 'a' && ch <= 'z')
    {
        cout << "Given Character is LowerCase" << endl;
    }
}