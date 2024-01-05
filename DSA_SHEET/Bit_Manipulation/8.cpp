#include <bits/stdc++.h>
using namespace std;

int getSum(int a, int b){
    //half-adder
    return b==0? a : getSum(a^b, (a&b)<<1);
}

int main(){
    int a, b;
    cout<<"Enter number 1"<<endl;
    cin>>a;
    cout<<"Enter number 2"<<endl;
    cin>>b;
    // int a=3,b=5;
    cout<<"The sum is "<<getSum(a,b)<<endl;
    return 1;
}