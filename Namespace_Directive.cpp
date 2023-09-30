#include<iostream>
using namespace std;

namespace n1{
    int a=10;
}

int main(){
    
    using namespace n1;      //namespace directive (to avoid scope resolution operator)
    printf("%d",a);          //n1::a avoided

    return 0;
}