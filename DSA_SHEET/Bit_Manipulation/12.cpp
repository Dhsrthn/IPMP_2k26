#include <bits/stdc++.h>
using namespace std;

//nibble swap
#define bits 8
int nibbleSwap(int n){
    int rightMost=15;
    int leftMost=rightMost<<(bits-4);
    int center = 0 | ~(leftMost|rightMost);
    center=center &n;
    leftMost=(leftMost&n) >> (bits-4);
    leftMost=leftMost&rightMost;    
    rightMost=rightMost&n;
    rightMost=rightMost<<(bits-4);
    return (center|rightMost|leftMost);
}

int main(){
    cout<<"Enter a number"<<endl;
    int n;
    cin>>n;
    // int n=100;
    cout<<n<<" after nibble swap "<<nibbleSwap(n)<<endl;
    return 1;
}