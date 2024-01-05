#include <bits/stdc++.h>
using namespace std;

//bit rotation

int leftRotate(int number, int rotate,int bits){
    return (number << rotate) | (number >> (bits-rotate));
}

int rightRotate(int number, int rotate, int bits){
    return (number >> rotate) | (number << (bits-rotate));
}

int main(){
    cout<<"Enter a number"<<endl;
    int n;
    cin>>n;
    cout<<"Enter total number of bits"<<endl;
    int bits;
    cin>>bits;
    cout<<"Enter number of bits to rotate by"<<endl;
    int rotate;
    cin>>rotate;

    // int n=16,n=32,rotate=2;
    cout<<n<<" after rotated left by "<<rotate<<" bit is "<<leftRotate(n, rotate, bits)<<endl;
    cout<<n<<" after rotated right by "<<rotate<<" bit is "<<rightRotate(n, rotate, bits)<<endl;
}