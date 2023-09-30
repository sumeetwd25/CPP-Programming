# include<iostream>
int main(){

    const double PI=3.142;  //common naming convension for constants is to make the letters upper case
    const double G=9.81;

    PI=3.14159;
    std::cout<<PI;     // this will show error because constant values cannot be changed

    std::cout<<"Gravitational acceleration = "<<G<<" m/s";
}

//The const keyword specifies that a variable's value is  constant
//Tells the compiler to prevent anything from modifying it
//(read only)