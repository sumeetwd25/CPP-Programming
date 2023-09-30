#include<iostream>
using namespace std;

namespace n1{
    int a=10;
    namespace n2{           //nested namespace
        int a=20;
    }
}

namespace n3{
    int a=30;
}

int main(){

    printf("n1::a = %d",n1::a);
    printf("\nn1::n2::a = %d",n1::n2::a);
    printf("\nn3::a = %d",n3::a);

    return 0;
}