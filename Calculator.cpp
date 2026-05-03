#include <iostream>
using namespace std;

int main()
{
    bool repeat = true;
    while (repeat == true)
    {
        float num1, num2;
        cout << "Enter Number 1:";
        cin >> num1;
        cout << "Enter Number 2:";
        cin >> num2;
        cout << "\n";
        int ch;
        cout << "========================== CALCULATOR MENU ==========================\n";
        cout << "\n1. Addition" << endl;
        cout << "2. Subtraction" << endl;
        cout << "3. Multiplication" << endl;
        cout << "4. Division" << endl;
        cout << "5. Modulo" << endl;
        cout << "Enter your choice (1-5):";
        cin >> ch;
        cout << "\n";
        cout << "Number 1:" << num1 << endl;
        cout << "Number 2:" << num2 << endl;
        if (ch == 1)
        {
            float sum = num1 + num2;
            cout << "Sum is:" << sum << endl;
        }
        else if (ch == 2)
        {
            float diff = num1 - num2;
            cout << "Difference is:" << diff << endl;
        }
        else if (ch == 3)
        {
            float prod = num1 * num2;
            cout << "Product is:" << prod << endl;
        }
        else if (ch == 4)
        {
            float quo = num1 / num2;
            cout << "Quotient is:" << quo << endl;
        }
        else if (ch == 5)
        {
            int rem = int(num1) % int(num2);
            cout << "Remainder is:" << rem << endl;
        }
        else
        {
            cout << "Please enter a valid input...." << endl;
        }
        cout << " \n";
        bool valid_input = false;
        while (valid_input == false)
        {
            char cont;
            cout << "Want to continue ?? (Y/N):";
            cin >> cont;
            if (cont == 'Y')
            {
                cout << "Restarting..." << endl;
                cout << "=======================================================================\n";
                valid_input = true;
                repeat = true;
            }
            else if (cont == 'N')
            {
                cout << "Aborting..." << endl;
                cout << "=======================================================================\n";
                valid_input = true;
                repeat = false;
            }
            else
            {
                cout << "Enter a valid input..." << endl;
                cout << "=======================================================================\n";
                valid_input = false;
            }
        }
    }
}