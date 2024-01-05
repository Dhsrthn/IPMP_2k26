#include <bits/stdc++.h>
using namespace std;

//reverse bits of a number

#define bits 32

unsigned int reverse(unsigned int number){
    int count = sizeof(number)*bits-1;
    unsigned int reverseNum=number;

    number >>=1;
    while(number){
        reverseNum<<=1;
        reverseNum|=number&1;
        number>>=1;
        count--;
    }
    reverseNum<<=count;
    return reverseNum;
}

int main(){
    cout<<"Enter a number"<<endl;
    int n;
    cin>>n;
    // int n=1;
    cout<<reverse(n)<<endl;
    return 1;
}