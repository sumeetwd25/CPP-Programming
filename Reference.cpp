#include<iostream>
using namespace std;

int main(){
    int a=100;
    int &r=a;                   //r is reference variable

    cout<<"a = "<<a<<" r = "<<r<<endl;
    cout<<"&a = "<<&a<<" &r = "<<&r<<endl;

    a++;
    cout<<"After a++, a = "<<a<<" After a++, r = "<<r<<endl;

    r++;
    cout<<"After r++, a = "<<a<<" After r++, r = "<<r<<endl;

    return 0;

}