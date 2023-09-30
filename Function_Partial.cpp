#include<iostream>
using namespace std;

int add(int a, int b, int c=0, int d=0){        //arguments in the function can be defined partially
    
    return a+b+c+d;
}

int main(){

    int Addition;

    Addition=add(30,40);
    cout<<Addition<<endl;

    Addition=add(60,20,20);                     //value of c changed from 0 to 20
    cout<<Addition;

    return 0;    
}