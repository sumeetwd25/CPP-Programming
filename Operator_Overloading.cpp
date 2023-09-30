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
    
};

//operator function as non member function of the class

Point operator+(Point &pt1, Point &pt2){            // global/non-member function
                                                    //if we want to overload binary operator using non momber function
    //::operator+(pt1,pt2)                          //then operator+() takes two arguments                         
    Point temp;
    temp.x= pt1.x + pt2.x;
    temp.y= pt1.y + pt2.y;
    return temp;
}

int main(){

    Point pt1(15,25);
    Point pt2(30,40);
    Point pt3;

    pt1.disp();
    pt2.disp();

    pt3=pt1+pt2;                                    // + binary operator
    pt3.disp();


    return 0;

}