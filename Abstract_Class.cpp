#include<iostream>
using namespace std;

class Student{                                      //if a class consist of pure virtual fn the it is called ABSTRACT CLASS

    public:
    virtual void details()=0;                       //PURE VIRTUAL FUNCTION
};

class info:public Student{

    public:
    void details(){
        cout<<"Inside info class"<<endl;
    }
};

int main(){
    Student *ptr;
    info i;
    ptr=&i;                                         //derived class object is assigned to base class pointer aka OBJECT SLICING
    ptr->details();

    return 0;
}
