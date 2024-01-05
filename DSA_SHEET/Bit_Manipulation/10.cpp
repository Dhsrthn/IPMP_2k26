#include <bits/stdc++.h>
using namespace std;

//swapping every even and odd bit;
#define bits 32

int swap(int n){
    
    int evenMask, oddMask=1;
    for(int i=0; i<log2(bits);i++){
        oddMask=oddMask<<(1<<(i+1))|oddMask;
    }
    evenMask=oddMask<<1;
    // int evenMask = n & 0xAAAAAAAA;
    // int oddMask = n & 0x55555555;    
    evenMask=evenMask&n;
    oddMask=oddMask&n;
    evenMask>>=1;
    oddMask<<=1;

    return (evenMask | oddMask);
}

int main(){
    cout<<"Enter a number"<<endl;
    int n;
    cin>>n;
    cout<<n<<" after the swapping "<<swap(n)<<endl;
    return 1;
}