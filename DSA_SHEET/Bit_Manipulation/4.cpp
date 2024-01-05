#include <bits/stdc++.h>
using namespace std;

//number of bits that need to be flipped to convert a to b

int noSet(int n){
    int count=0;
    while(n){
        n&=(n-1);
        count++;
    }
    return count;
}

int noFlip(int a, int b){
    return noSet(a^b);
}

int main(){
    cout<<"Enter number 1"<<endl;
    int a;
    cin>>a;
    cout<<"Enter number 2"<<endl;
    int b;
    cin>>b;
    // int a=16,b=22;
    cout<<"Number of bits to flip "<<noFlip(a,b)<<endl;
    return 1;
}