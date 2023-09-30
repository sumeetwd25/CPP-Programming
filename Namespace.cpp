#include<iostream>
using namespace std;

namespace n1{               //namespace definition
    int a=10;
    int b=30;
}

namespace n2{
    int a=20;
    int b=40;
}

int main(){

    cout<<n1::a;
    cout<<"\n"<<n2::a;

    printf("\n\n%d",n1::b);     //another method
    printf("\n%d",n2::b);
    
    return 0;
}