#include <bits/stdc++.h>
using namespace std;

int main(){

    unordered_set <int> p;
    p.insert(2);
    p.insert(4);
    p.insert(1);
    p.insert(1);
    for(auto x: p){
        cout<<x<<"\t";
    }
    //duplicate not inserted
    cout<<endl;
    int element=5;
    if(p.find(element)==p.end())
        cout<<"element not found"<<endl;
    else    
        cout<<"Element found"<<endl;
    
    //other methods of set
    
    return 1;
}