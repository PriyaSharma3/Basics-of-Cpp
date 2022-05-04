#include <iostream>
using namespace std;

void replacechar(char arr[], char no1, char no2)
{
    if (arr[0] == '\0')
        return;
    if (arr[0] == no1)
    {
        arr[0] = no2;
        replacechar(arr + 1, no1, no2);
    }
    if (arr[0] != no1)
    {
        replacechar(arr + 1, no1, no2);
    }
}

int main()
{
    char arr[10];
    int length;
    char replacedno, replaceno;
    cout << "enter the string :" << endl;
    cin >> arr;
    cout << "enter the letter to be replaced and replace by: " << endl;
    cin >> replacedno >> replaceno;
    cout << arr << endl;
    replacechar(arr, replacedno, replaceno);
    cout << "array: " << arr << endl;
}