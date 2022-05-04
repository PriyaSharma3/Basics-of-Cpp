#include<iostream>
using namespace std;

 int main (){
     int d, no;
     bool nonprime;
     cout << "Enter a no :" ;
     cin >> no ;
     cout << "All prime no.s till "<< no << " are :"<<endl;
   while(no !=1){
        d=no-1;
        while (d!=1){
            if(no%d ==0){
                nonprime=true;
                break;
            }
            else {
                nonprime=false;
                d--;
            }
        }
        if(nonprime==false){
            cout << no << " "<<ends;
        }
        no --;
    }
    
 }