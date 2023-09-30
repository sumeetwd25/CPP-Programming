#include<iostream>
using namespace std;

class Demo{
    int n1,n2;

public:
    Demo();
    Demo(int a, int b);
    void disp();
    
};

Demo::Demo(){                     
        n1=1;
        n2=2;
    }

Demo::Demo(int a, int b){         
        n1=a;
        n2=b;
    }

void Demo::disp(){

        cout<<"n1="<<n1<<endl;
        cout<<"n2="<<n2<<endl;
    }

int main(){

    Demo d;                     
    d.disp();                   
    
    Demo d1(40,50);
    d1.disp();

    return 0;
}

/* if constructors and member functions are defined outside the class, then we use scope resolution operator */