#include <bits/stdc++.h>
using namespace std;

//unset rightmost set bit

int unsetRightmost(int n){
    return n & (n-1);
}

int main(){
    cout<<"Enter a number"<<endl;
    int n;
    cin>>n;
    // int n=23;
    cout<<"After unsetting rightmost set bit "<<unsetRightmost(n)<<endl;
    return 1;
}