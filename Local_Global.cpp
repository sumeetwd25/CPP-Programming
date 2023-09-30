#include<iostream>
using namespace std;

namespace n1{
    int x=100;
}

int x=200;                          //global variable

int main(){

    int x=300;                      //local variable

    printf("%d",x);
    printf("\n%d",::x);             // scope resolution operator is used to access global variable
    printf("\n%d",n1::x);

    return 0;
}