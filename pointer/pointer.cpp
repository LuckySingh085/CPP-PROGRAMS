#include<iostream>
#include<vector>
using namespace std;
int main(){
    int a=10;
    int*ptr=&a;
    cout<<"value of a is"<<a<<endl;
    cout<<"address of a is"<<&a<<endl;
    cout<<"value of ptr is"<<ptr<<endl;
    cout<<"value at address stored in ptr is"<<*ptr<<endl;
    return 0;
}