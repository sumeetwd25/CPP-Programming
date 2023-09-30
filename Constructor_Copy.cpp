#include<iostream>
using namespace std;

class Complex{
    private:
    int real;
    int img;

    public:
    Complex(){
        this->real=10;
        this->img=5;
    }

    Complex(int real, int img){
        this->real=real;
        this->img=img;
    }

    Complex(Complex &cobj){                                     //copy constructor
        this->real=cobj.real;
        this->img=cobj.img;
    }

    void disp(){
        cout<<"Real = "<<this->real<<" Img = "<<this->img<<endl<<endl;
    }

};

int main(){

    Complex c1;
    c1.disp();

    Complex c2(100,200);
    c2.disp();

    Complex c3(c2);                                             //passed object as an argument to the constructor         
    c3.disp();

    return 0;


}