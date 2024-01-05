#include <bits/stdc++.h>
using namespace std;

//check if a number is power of 2

bool checkPower(int n){
    return (n && !(n & (n-1)));
}

int main(){
    cout<<"Enter a number"<<endl;
    int n;
    cin>>n;
    // int n=33;
    // int n=256;
    if(checkPower(n))
        cout<<"The given number is a power of 2"<<endl;
    else  
        cout<<"The given number is not a power of 2"<<endl;
    return 1;
}