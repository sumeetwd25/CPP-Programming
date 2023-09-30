#include<iostream>
#include<iomanip>
using namespace std;

int main(){
    int n,i;
    cout<<"Enter how many elements you want to enter in an array: ";
    cin>>n;

    int *ptrArr=new int [n];                        //dynamic memory allocation (similar to malloc in c)
    cout<<"\nEnter array elements: ";
    for(i=0;i<n;++i)
    cin>>ptrArr[i];
    cout<<"\nArray elements are "<<endl;
    for(i=0;i<n;++i)
    cout<<setw(6)<<ptrArr[i];


    delete []ptrArr;                                //to free the memory allocated to array
    ptrArr=NULL;
    
    return 0;
}