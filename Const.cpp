#include<iostream>
using namespace std;

class Test{

    int num1;
    const int val;

    public:
    Test():num1(10),val(50){}                   //constuctor member initializer list (shortcut method  for member initalization)

    /*
    Test(){                                     //not allowed   //error
        num1=10;                                //if we have constant data member inside the class then we must always initialize
        val=50;                                 //constant data member using constructor member initializer list
    }

        Test():val(50){                         allowed    //partial constructor initializer list
            num1=10;
        }

    */

    void disp(){
        cout<<"Num1 = "<<num1<<endl;
        cout<<"Val = "<<val<<endl;

        this->num1+=10;                         //allowed
        //this->val+=10;                        //error //constant values cannot modified
        cout<<"After modification, Num1 = "<<num1<<endl;
    }

};

int main(){
    
    Test t;
    t.disp();

    return 0;
}