#include<iostream>
using namespace std;

void disp();                               //same function name but with different arguments
void disp(int num1);                       //disp() is taking many forms in this program ('POLYMORPHISM')
void disp(int num1, int num2);
void disp(char ch);
void disp(int num1, char ch);

int main(){

    disp();
    disp(10);
    disp(10,40);
    disp('S');
    disp(100,'K');

    return 0;

}

void disp(){
    cout<<"Empty"<<endl;
}

void disp(int num1){
    cout<<"num1="<<num1<<endl;
}

void disp(int num1, int num2){
    cout<<"num1="<<num1<<" "<<"num2="<<num2<<endl;
}

void disp(char ch){
    cout<<"Ch="<<ch<<endl;
}

void disp(int num1, char ch){
    cout<<"num1="<<num1<<" "<<"Ch="<<ch;
}