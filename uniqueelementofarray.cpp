#include <iostream>
using namespace std;

int main()
{
    int arr[100];
    int n;
    cout << "Enter size of an array:";
    cin >> n;
    cout << "Enter elements of an array:" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        int count = 0;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] == arr[j])
            {
                count++;
            }
        }
        if(count ==0){
            cout <<"unique element is :"<<arr[i]<<endl;
        }
    }
}