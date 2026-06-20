#include<iostream>
#include<vector>
using namespace std;
int main(){
    int a= 10;
    int*ptr= &a;
    cout<<"value of a is "<<a<<endl;
    cout<<"address of a is "<<&a<<endl;
    cout<<"value of ptr is "<<ptr<<endl;//jab bina * ke print akru gii tb address print kare gaa 
    cout<<"value at address stored in ptr is"<<*ptr<<endl;//* use kare gye to value print hoga
    return 0;
}