#include <iostream>
using namespace std;

int main()
{
    int arr[10][10], m, n, ar[20];
    cout << "enter  rows and columns of an array :" << endl;
    cin >> m >> n;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
    }
    cout << "Array:" << endl;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    for (int j = 0; j < n; j++)
    {
        int sum = 0;
        for (int i = 0; i < m; i++)
        {
            sum = sum + arr[i][j];
        }
        ar[j] = sum;
    }
    cout << "column wise sum of array is :" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << ar[i] << " " << ends;
    }
}