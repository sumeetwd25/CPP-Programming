#include<iostream>
using namespace std;

class Complex{                  //private by default  //data security
    //data members
    int Real;
    int Img;

    //member functions
    public:
    void accept();
    void disp();

};                              //end of class scope


//member functions defined outside the class                     
    
    void Complex::accept(){
        cout<<"Enter Real part: ";
        cin>>Real;
        cout<<"Enter imaginary part: ";
        cin>>Img;
    }

    void Complex::disp(){
        cout<<"Real part: "<<Real<<endl;
        cout<<"Imaginary part: "<<Img<<"\n\n";
    }


int main(){

    Complex c1;                 //creating object/instance of class  //instantiation
    c1.accept();
    c1.disp();

    Complex c2;
    c2.accept();
    c2.disp();

    return 0;
}

/*
If we want to define member function outside the class, use scope resolution.
*/