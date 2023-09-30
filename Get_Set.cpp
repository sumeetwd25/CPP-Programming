#include<iostream>
using namespace std;

class Complex{
    int real, img;

public:

    //CONSTRUCTOR
    Complex();
    Complex(int real, int img);

    //DESTRUCTOR
    ~Complex(){
        cout<<"Destructor called "<<this<<endl<<endl;
    }

    //GETTER
    int getReal();
    int getImg();

    //SETTER
    void setReal(int real);
    void setImg(int img);
    
    //FACILITATOR
    void accept();
    void disp();
};

Complex::Complex(){
    real=10;
    img=20;
}

Complex::Complex(int real, int img){
    this->real=real;
    this->img=img;
}

int Complex::getReal(){
    return this->real;
}

int Complex::getImg(){
    return this->img;
}

void Complex::setReal(int real){
    this->real=real;
}

void Complex::setImg(int img){
    this->img=img;
}

void Complex::accept(){
    cout<<"Enter real value: ";
    cin>>this->real;
    cout<<"Enter imaginary value: ";
    cin>>this->img;
}

void Complex::disp(){
    cout<<"\nReal value = "<<real<<" Imaginary value = "<<img<<endl<<endl;
}

int main(){

    Complex c;
    c.setImg(400);                                                  //set individual/specific value
    c.disp();

    Complex c1(100,200);
    int r=c1.getReal();                                             //fetch individual/specific value
    cout<<"Real value of object c1 = "<<r<<endl;
    int i=c1.getImg();
    cout<<"Imaginary value object c1 = "<<i<<endl<<endl;

    Complex c2;
    c2.accept();
    c2.setImg(90);
    c2.disp();

    return 0;
}