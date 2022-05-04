#include <iostream>
using namespace std;

int main()
{
    int a = 0, b = 1, nextno, no;
    cout << "Enter the no :";
    cin >> no;
    cout << "Fibonacci series is :" << a << " " << b << " ";
    while (b < no)
    {
        nextno = a + b;
        if (nextno < no)
        {
            cout << nextno << " ";
        }
        a = b;
        b = nextno;
    }
}