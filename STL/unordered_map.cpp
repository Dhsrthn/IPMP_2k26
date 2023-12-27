#include <bits/stdc++.h>
using namespace std;

int main(){

    unordered_map <string, int> p;
    p["one"]=1;
    p["two"]=2;
    p["three"]=3;
    p["four"]=4;

    for(auto it= p.begin(); it!=p.end(); it++ ){
        cout<<it->first<< "\t"<<it->second<<endl;
    }

    //other functions of map

    return 1;
}