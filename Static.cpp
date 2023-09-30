#include<iostream>
using namespace std;

class Math{
private:
    int n1,n2;

public:
    Math(){
        n1=10;
        n2=20;
    }

    Math(int n1, int n2){

        this->n1=n1;
        this->n2=n2;
    }

    void add(){                                                 //non static member function
        cout<<"Addition = "<<this->n1+this->n2<<endl;
    }

    static void sum(int n1, int n2){
        int res=n1+n2;
        cout<<"Result = "<<res<<endl;
    }

};

int main(){

    Math m;
    m.add();

    Math m1(40,50);
    m1.add();

    Math::sum(70,30);                                           //scope resolution is used to call static member function

    return 0;
}