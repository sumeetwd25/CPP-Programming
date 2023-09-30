#include<iostream>
using namespace std;

class Demo{

    int n1,n2;
public:
    Demo(){                     //constructor   //parameterless constructor //user defined constructor
        n1=1;
        n2=2;
    }

    Demo(int a, int b){         //paramaterized constructor
        n1=a;
        n2=b;
    }

    void disp(){

        cout<<"n1="<<n1<<endl;
        cout<<"n2="<<n2<<endl;
    }
};

int main(){

    Demo d;                     //this will call constructor implicitly
    d.disp();                   //disp() is called object of the class Demo
    
    Demo d1(40,50);
    d1.disp();

    return 0;
}

/* if we want to initialize data members of class, then we can use constructor*/