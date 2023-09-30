#include<iostream>
using namespace std;

class Complex{                  //private by default  //data security
    //data members
    int Real;
    int Img;

    //member functions
    public:                     //made public manually
    void accept(){
        cout<<"Enter Real part: ";
        cin>>Real;
        cout<<"Enter imaginary part: ";
        cin>>Img;
    }

    void disp(){
        cout<<"Real part: "<<Real<<endl;
        cout<<"Imaginary part: "<<Img<<"\n\n";
    }
};                              //end of class scope

int main(){

    Complex c1;                 //creating object/instance of class  //instantiation
    c1.accept();
    c1.disp();

    Complex c2;
    c2.accept();
    c2.disp();

    return 0;
}