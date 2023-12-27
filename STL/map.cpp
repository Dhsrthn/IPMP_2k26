#include <bits/stdc++.h>
using namespace std;

int main(){

    map <string, int> p;
    p["one"]=1;
    p["two"]=2;
    p["three"]=3;
    p["four"]=4;

    for(auto it= p.begin(); it!=p.end(); it++ ){
        cout<<it->first<< "\t"<<it->second<<endl;
    }

    cout<<p.size()<<endl;

    p.insert(pair <string, int> ("five",5));

    for(auto it= p.begin(); it!=p.end(); it++ ){
        cout<<it->first<< "\t"<<it->second<<endl;
    }

    //count
    cout<<p.count("two")<<endl;

    //erase
    p.erase("two");
    cout<<p.count("two")<<endl;

    //size and clear
    cout<<p.size()<<endl;
    p.clear();
    cout<<p.size()<<endl;

    return 1;

}