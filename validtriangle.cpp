#include<iostream>
using namespace std;

int main (){
    int a,b,c ;
    cout <<" Enter the side of a triangle: ";
    cin >> a >> b >> c;
    if ( a+b > c && b+c >a && c+a >b && a >0 && b>0 && c>0){
        cout<< "Triangle is formed. "<<endl;
    }
    else{
        cout << "Invalid triangle."<<endl;
    }
}