#include<iostream>
using namespace std;

int main(){

    cout<<"\"Ash Ketchum\""<<endl;      // '\'= escape sequence to print "" in this case.
    cout<<"Pokemon\tMaster"<<endl;      // '\t' = horizontal tab.
    cout<<"Day\\01"<<endl;              // \ is used twice because \0 is considered as null character.
    cout<<"Pikach\bu"<<endl;            // '\b' = backslash character constant skips one character before it.(run  in terminal)
    cout<<"Best Friends\rbuddy";        // '\r' = takes the cursor on first character of the same line and overwrites the contents.

    return 0;
}