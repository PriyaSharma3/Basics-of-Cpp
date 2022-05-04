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
    int round;
    cout << "Enter rounds by which it should be rotated :" << endl;
    cin >> round;
    for (int i = 0; i < round; i++)
    {
        for (int j = 0; j < n; j++)
        {
            int temp = arr[j];
            arr[j] = arr[j + 1];
            arr[j + 1] = temp;
        }
    }
    cout << "rotated array is :" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}