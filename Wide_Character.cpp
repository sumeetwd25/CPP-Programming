#include<iostream>
using namespace std;

int main(){

    wchar_t x;
    cout<<"Enter a character: ";
    wcin>>x;
    wcout<<x;
    cout<<"\nSize = "<<sizeof(x);

    return 0;
}

/*
char    = character.(1 byte or 8 bits) <-- ASCII value 0 to 255.
wchar_t = wide character.(For larger character range.)
'cin'   = console input.(Similar to scanf).
'>>'    = extraction operator.
*/