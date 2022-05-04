#include <iostream>
using namespace std;

int sumofarray(int arr[], int size)
{
    if (size == 0)
        return 0;
    if (size == 1)
        return arr[0];
    int sum = 0;
    sum = arr[0] + sumofarray(arr + 1, size-1);
    return sum;
}
int main()
{
    int size;
    cout << "enter size" << endl;
    cin >> size;
    int arr[size];
    cout << "enter elements :" << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    cout << "sum of elements is :" << endl;
    int output = sumofarray(arr, size);
    cout << output << endl;
}