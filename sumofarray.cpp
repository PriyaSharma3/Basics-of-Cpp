#include <iostream>
using namespace std;

int main()
{
    int arr[12], n;
    cout << "Enter size of an array :";
    cin >> n;
    cout << "Enter elements of an array :" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "array :" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i]<< endl ;
    }
    cout << endl;
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum = sum + arr[i];
    }
    cout << "sum of elements of an array is :" << sum << endl;
}