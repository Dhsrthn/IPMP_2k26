#include <bits/stdc++.h>
using namespace std;

//absolute vale without branching 

int absolute(int n){
    int mask = n>>31;
    return (mask + n ) ^ mask;
}

int main(){
    cout<<"Enter a number"<<endl;
    int n;
    cin>>n;
    cout<<"Absolue value of "<<n<<" is "<<absolute(n)<<endl;
    return 1;
}

