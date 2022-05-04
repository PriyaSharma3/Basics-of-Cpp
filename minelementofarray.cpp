#include<iostream>
using namespace std ;

int main (){
 int arr[100];
 int n;
 cout << "Enter size of an array:";
 cin >>n ;
  for (int i =0 ; i <n ; i ++){
      cin >> arr[i];
  }
  for (int i =0;i <n ; i++){
      cout << arr[i]<< " "<< ends;
  }
  int min= arr[0];
  for (int i =1;i <  n ; i++){
      if(arr[i]<min){
          min = arr[i];
      }
  }
  cout <<"minimum element of an array is :" << min << endl;
}