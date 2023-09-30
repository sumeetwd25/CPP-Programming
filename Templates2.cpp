#include<iostream>
using namespace std;

template<class A, class B>

void swap_number(A &x, B &y){

    A temp=x;
    x=y;
    y=temp;

}

int main(){
    int n1=10;
    float n2=20.22;

    cout<<"Befor swap, N1 = "<<n1<<" N2 = "<<n2<<endl;
    swap_number<int,float>(n1,n2);
    cout<<"After swap, N1 = "<<n1<<" N2 = "<<n2<<endl;

    return 0;
}