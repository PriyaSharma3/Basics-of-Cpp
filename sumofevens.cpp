#include <iostream>
using namespace std;

int main()
{
    int n, sum = 0;
    cout << "Enter N :";
    cin >> n;
    for (int i = 2; i <= n; i=i+2)
    {
        sum = sum + i;
    }
    cout << "Sum Of Evens till n is : " << sum << endl;
    return 0;
}