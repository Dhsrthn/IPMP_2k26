#include <bits/stdc++.h>
using namespace std;

//position of rightmost 1

int position(int n){
    return log2(n& -n)+1;
}

int main(){
    cout<<"Enter a number"<<endl;
    int n;
    cin>>n;
    // int n=14;
    cout<<"Position of rightmost 1 in bianry representation of "<<n<<" is "<<position(n)<<endl;
    return 1;
}