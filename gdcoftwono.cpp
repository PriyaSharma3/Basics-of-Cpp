#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int no1, no2, gcd;
    cout << "Enter two no.s:" << endl;
    cin >> no1 >> no2;
    int min = std::min(no1, no2);
    for (int i = 2; i <= min; i++)
    {
        if (no1 % i == 0 && no2 % i == 0)
            gcd = i;
    }
    cout << "gcd is" << gcd << endl;
}