#include <iostream>
using namespace std;

int power(int x, int y)
{
    if (y == 0)
        return 0;
    if (y == 1)
        return x * y;
    int smallinput = power(x, y - 1);
    int output = x * smallinput;
    return output;
}

int main()
{
    int x, y;
    cout << "Enter the no & raised to power:" << endl;
    cin >> x >> y;
    int result = power(x, y);
    cout << "result :" << result << endl;
}