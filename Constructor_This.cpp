#include<iostream>
using namespace std;

class Demo{

    int num1,num2;
public:
    Demo(){                     
        num1=1;
        num2=2;
    }

    Demo(int num1, int num2){         
       this-> num1=num1;                            //'this' is a keyword which points towards itself
       this-> num2=num2;
    }

    void disp(){

        cout<<"num1="<<num1<<endl;
        cout<<"num2="<<num2<<endl;
    }
};

int main(){

    Demo d;                     
    d.disp();
    cout<<"Size = "<<sizeof(d)<<endl<<endl;         //size of object is equal to size of data members available in the class
                   
    
    Demo d1(40,50);
    d1.disp();
    return 0;
}

