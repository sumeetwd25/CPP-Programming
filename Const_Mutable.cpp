#include<iostream>
using namespace std;

class Test{

    int num;
    const int c;
    mutable int m;

    public:
    Test():num(30),c(40),m(50){}                   

    void disp() const {                                         //constant member function
        cout<<"Num = "<<num<<" C = "<<c<<" M = "<<m<<endl;
        //num++;                                                //error
        //c++;                                                  //error
        m++;
        cout<<"Num = "<<num<<" C = "<<c<<" M = "<<m<<endl;

       
    }

};

int main(){
    
    Test t;
    t.disp();

    return 0;
}