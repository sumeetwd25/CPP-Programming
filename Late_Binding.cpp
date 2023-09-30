#include<iostream>
using namespace std;

class Base{

    public:
    virtual void show(){                                    //only base class fn can be made virtual
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

Base *ptr;
Derived dobj;
ptr=&dobj;
ptr->show();

return 0;
}