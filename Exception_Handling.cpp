#include<iostream>
using namespace std;

int main(){
    int n1,n2;
    cout<<"Enter n1: ";
    cin>>n1;
    cout<<"\nEnter n2: ";
    cin>>n2;

    try{
        if (n2==0){
        throw 1;                                                    // 1 is any int value
        //throw 1.1;                                                // 1.1 is double value so it will show generic catch block
        }
        else{
            int res=n1/n2;
            cout<<"\nResult = "<<res<<endl;
        }
    }

    catch(int i){
        cout<<"\nn1 value cannot be zero"<<endl;                    //corrective action
    }

    catch(...){
        cout<<"\nn1 value cannot be zero (generic)"<<endl;          //generic catch block
    }
}