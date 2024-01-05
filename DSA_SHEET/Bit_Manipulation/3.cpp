#include <bits/stdc++.h>
using namespace std;

//number of set bits

int noSet(int n){
    int count=0;
    while(n){
        n&=(n-1);
        count++;
    }
    return count;
}

int main(){
    cout<<"Enter a number"<<endl;
    int n;
    cin>>n;
    //int n=7;
    cout<<"Number of set bits in given number is "<<noSet(n)<<endl;
    return 1;
}