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
    int count0 = 0;
    int k = n - 1;
    for (int j = 0; j < n - 2; j++)
    {
        for (int i = 0; i < k; i++)
        {
            int current = arr[i];
            if (arr[i] == 0)
            {
                arr[i] = arr[i + 1];
                arr[i + 1] = current;
                count0++;
            }
           
        }
        k--;
    }
    // for (int i = n - count0 - 1; i < n; i++)
    // {
    //     arr[i] = 0;
    // }
    cout << "Array :" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " " << ends;
    }
}