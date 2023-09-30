#include<iostream>
using namespace std;

class Point{

    public:
    int x,y;

    Point(){
        this->x=10;
        this->y=20;
    }

    Point(int x, int y){
        this->x=x;
        this->y=y;
    }

    void disp(){
        cout<<"X = "<<this->x<<" Y = "<<this->y<<endl;
    }
    
//operator function as member function of the class

    Point operator+(Point &other){                      //pt1 is current object                   
    Point temp;                                         //pt2 is other object as an argument
    temp.x= this->x + other.x;
    temp.y= this->y + other.y;
    return temp;
}

};


int main(){

    Point pt1(50,60);
    Point pt2(30,40);
    Point pt3;

    pt1.disp();
    pt2.disp();


    pt3=pt1.operator+(pt2);
    pt3.disp();


    return 0;

}