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
        
        
        cout<<"\nInside derived class show()"<<endl;
    }
};

int main(){

Base *ptr;                                              //base class pointer object
Derived d;                                              //derived class object
ptr=&d;                                                 //pointer stores address of derived class object
ptr->show();                                            //this will always give a call to base class fn (early binding)

return 0;
}