#include <bits/stdc++.h>
using namespace std;

//position of only set bit; (-1 if more than 1 set bit)

int findPos(int n){
    //check if its a power of 2
    if(n && !(n&(n-1))){
        return log2(n)+1;
    }
    return -1;
}

int main(){
    cout<<"Enter a number"<<endl;
    int n;
    cin>>n;
    int pos=findPos(n);
    if(pos!=-1){
        cout<<"The position of only set bit is "<<pos<<endl;
    }else{
        cout<<"Either no set bit, or more than 1 set bit found in number"<<endl;
    }
    return 1;
}