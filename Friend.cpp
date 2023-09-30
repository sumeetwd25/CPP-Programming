#include<iostream>
using namespace std;

class Test{
private:
    int num1;

public:    
    Test(){
        this->num1=10;
    }

    Test(int num1){
        this->num1=num1;
    }

    void disp();                                        //member function of the class

    friend void print();                                //declaration of friend function inside the class
                                                        //it is non member fn bcoz it is defined outside th class 
};

void Test::disp(){
    cout<<"Inside disp(), Num1 = "<<this->num1<<endl;
}

void print(){                                           //friend fn can access private data members //no scope resolution required
    Test tobj;
    tobj.num1=600;
    cout<<"\nInside print(), Num1 = "<<tobj.num1<<endl;
}

int main(){

    Test tobj;
    tobj.disp();

    print();                                            //friend fn does not reqire object name to call [i.e. tobj.print()]

    return 0;

}