#include <iostream>
using namespace std;

int main()
{
    int no, rev = 0, rem;
    cout << "Enter the no " << endl;
    cin >> no;
    while (no != 0)
    {
        rem = no % 10;
        rev = rev * 10 + rem;
        no = no / 10;
    }
    cout << "reverse is : " << rev << endl;
}