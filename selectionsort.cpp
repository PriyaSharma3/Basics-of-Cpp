#include <iostream>
using namespace std;

int main()
{
    int arr[100];
    int n, temp;
    cout << "Enter size of an array:";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "Original array is:" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " " << ends;
    }
    cout << "Sorted array is :" << endl;
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n ; j++)
        {
            int temp = arr[i];
            if (arr[i] > arr[j])
            {
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " " << ends;
    }
}