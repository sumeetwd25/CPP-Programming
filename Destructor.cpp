#include<iostream>
using namespace std;

class Demo{

    int n1,n2;
public:
    Demo(){   
        cout<<"Inside parameterless constructor "<<this<<endl;                  
        n1=1;
        n2=2;
    }

    Demo(int a, int b){    
        cout<<"Inside parameterized constructor "<<this<<endl;     
        n1=a;
        n2=b;
    }

    void disp(){

        cout<<"n1="<<n1<<endl;
        cout<<"n2="<<n2<<endl;
    }

    ~Demo(){
        cout<<"Destructor called "<<this<<endl;
    }
};

int main(){

    Demo d;                     
    d.disp();                   

    Demo d1(40,50);
    d1.disp();

    return 0;
}

/* If destructor is not called manually, it is called automatically */

