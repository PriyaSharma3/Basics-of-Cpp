#include <iostream>
using namespace std;

int main()
{
    int a = 0, b = 1, nextno, no;
    cout << "Enter the no :";
    cin >> no;
    while (b <= no)
    {
        nextno = a + b;
        a = b;
        b = nextno;
    }
    if (a == no)
    {
        cout << no<< " - it is a  member of fibonacci." << endl;
    }
    else
    {
        cout << no << " - not a member." << endl;
    }
}