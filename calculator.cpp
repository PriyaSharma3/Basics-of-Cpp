#include <iostream>
using namespace std;

int main()
{
    int choice, a, b;
    cout << "Enter the choices here:" << ends;
    cout << " 1-add,2-subtraction,3-multiplication,4-remainder,5-dividing" << endl;
    cin >> choice;
    cout << "Enter the values here:" << endl;
    cin >> a >> b;
    switch (choice)
    {
    case 1:
        cout << "result:" << a + b << endl;
        break;

    case 2:
        if (a >= b)
        {
            cout << "result:" << a - b << endl;
        }
        else
        {
            cout << "result :" << b - a << endl;
        }
        break;
    case 3:
        cout << "result:" << a * b << endl;
        break;
    case 4:
        cout << "result:" << a % b << endl;
        break;
    case 5:
        cout << "result:" << a / b << endl;
        break;
    default:
        cout << "Invalid choice.Please select right choice again!!" << endl;
        break;
    }
}