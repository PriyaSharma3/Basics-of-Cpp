#include <iostream>
using namespace std;

int countdigits(int n)
{
    int count = 0;
    if (n < 10)
        return 1;

    count++;
    int output = count + countdigits(n / 10);
    return output;
}

int main()
{
    int no;
    cout << " enter a no: " << endl;
    cin >> no;
    int count = countdigits(no);
    cout << count << endl;
}