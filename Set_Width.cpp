#include<iostream>
#include<iomanip>           //input output manipulation
using namespace std;

int main(){
    int a=10,b=40000,c=50;

    cout<<a<<" "<<b<<" "<<c<<endl;
    cout <<setw(8)<<a <<setw(8)<<b <<setw(8)<<c <<endl;
    printf("%8d%8d%8d\n",a,b,c);

    cout<<setw(8)<<setfill('#')<<a<<endl;
    cout   <<setw(8)<<setfill('#')<<a   <<setw(8)<<setfill('*')<<b   <<endl;

    return 0;
}