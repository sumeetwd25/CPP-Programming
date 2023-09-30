#include<iostream>
using namespace std;

template<class T>

void swap_number(T &o1, T&o2){
    T temp=o1;
    o1=o2;
    o2=temp;
}

int main(){
    int n1=20, n2=30;

    cout<<"\nBefore swap, N1 = "<<n1<<" N2 = "<<n2<<endl;
    swap_number<int>(n1,n2);
    cout<<"After swap, N1 = "<<n1<<" N2 = "<<n2<<endl;

    float f1=1.1, f2=2.2;
    
    cout<<"\n Before swap, F1 = "<<f1<<" F2 = "<<f2<<endl;
    swap_number<float>(f1,f2);
    cout<<"After swap, F1 = "<<f1<<" F2 = "<<f2<<endl<<endl;

    return 0;
}