#include<iostream>
#include<iomanip>           //inpur output manipulation
using namespace std;

int main(){
    int x=10;

    cout<<"x in decimal form = "<<x;
    cout<<"\nx in decimal form = "<<setbase(10)<<x;
    cout<<"\nx in decimal form = "<<dec<<x<<endl;

    cout<<"\nx in octal form = "<<setbase(8)<<x;
    cout<<"\nx in octal form = "<<oct<<x<<endl;

    cout<<"\nx in hexadecimal form = "<<setbase(16)<<x;
    cout<<"\nx in hexadecimal form = "<<hex<<x;

   return 0;
}

/*  MODIFIERS:-
1) setbase(10) or dec
2) setbase(8) or octal
3) setbase(16) or hexadecimal
4) endl
*/