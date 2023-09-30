#include<iostream>
using namespace std;

void sum(int n1,int n2);                //global function declaration

int main(){

    int num1,num2;
    cout<<"Enter first number: ";
    cin>>num1;
    cout<<"Enter second number: ";
    cin>>num2;
    sum(num1,num2);                     //function call

    return 0;
}

void sum(int n1,int n2){                //function declaration

    int result=n1+n2;
    cout<<"Addition = "<<result;

}