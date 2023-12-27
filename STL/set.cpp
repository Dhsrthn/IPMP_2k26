#include <bits/stdc++.h>
using namespace std;

int main(){


    set <int> ex;
    ex.insert(2);
    ex.insert(1);
    ex.insert(1);

    for( int i : ex){
        cout<< i<<' ';
    }
    //1 is printed only once
    cout<<endl;

    //descending order set
    set <int, greater<int>> desc;
    desc.insert(10);
    desc.insert(1);
    desc.insert(12);
     for( int i : desc){
        cout<< i<<' ';
    }
    //printed in descending order
    cout<<endl;

    set <int> s2(desc.begin(), desc.end());
    for(int i: s2){
        cout<<i<<" ";
    }
    cout<<endl;

    //max_size and size
    cout<<s2.max_size()<<endl;
    cout<<s2.size()<<endl;

    s2.insert(25);
    s2.insert(27);
    s2.insert(29);
    s2.insert(31);

    //erase (before 25 in this case)
    s2.erase(s2.begin(),s2.find(25));
    for(int i: s2){
        cout<<i<<" ";
    }
    cout<<endl;
    
    s2.erase(27);
    for(int i: s2){
        cout<<i<<" ";
    }
    cout<<endl;

    cout<<*s2.lower_bound(30)<<endl;
    cout<<*s2.upper_bound(30)<<endl;

    return 1;
}