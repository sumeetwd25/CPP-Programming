#include<iostream>
using namespace std;

class Base{

    public:
    void show(){
        cout<<"\nInside base class show()"<<endl;
    }
};

class Derived:public Base{
    public:
    void show(){
        
        Base::show();                                       //fn overriding using scope resolution operator
        
        cout<<"\nInside derived class show()"<<endl;
    }
};

int main(){

Derived dobj;
dobj.show();

return 0;
}