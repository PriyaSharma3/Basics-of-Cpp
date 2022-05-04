#include <iostream>
using namespace std;

bool matcharray(int arr[], int size, int matchingno)
{
    bool result;
    if (size == 0)
        return false;

    if (arr[0] == matchingno)
    {
        result = true;
    }
    else
    {
        result = false;
    }
    result = result | matcharray(arr + 1, size - 1, matchingno);
    return result;
}

int main()
{
    int size, matchingno;
    cout << "enter size" << endl;
    cin >> size;
    int arr[size];
    cout << "enter elements :" << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    cout << "enter no to be matched :" << ends;
    cin >> matchingno;
    int result = matcharray(arr, size, matchingno);
    if (result == true)
    {
        cout << "true" << endl;
    }
    else
    {
        cout << "false" << endl;
    }
}