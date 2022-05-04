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
    int k= n-1;
    for(int i=0;i<n-1;i++){
        for (int j=0;j<k;j++){
         int current=arr[j];
         if(arr[j]>arr[j+1]){
             arr[j]=arr[j+1];
             arr[j+1]=current;
         }
        }
        k--;
    }
    cout << "Array after sorting is :"<<endl;
    for(int i=0;i<n;i++){
        cout << arr[i]<< " ";
    }
}