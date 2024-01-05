#include <bits/stdc++.h>
using namespace std;

//reverse a string using recursion

string reverseFunction(string toReverse){
    if(toReverse.length() == 1)
        return toReverse;
    return reverseFunction(toReverse.substr(1,toReverse.length()-1)) + toReverse.substr(0,1);
}   

int main(){
    cout<<"Enter string to reverse"<<endl;
    string toRev;
    cin>>toRev;
    // toRev="HelloWorld";
    cout<<"Reversed string is"<<endl;
    cout<<reverseFunction(toRev);
    return 1;
}