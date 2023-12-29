#include <bits/stdc++.h>
using namespace std;

int main(){

    deque <int> dq;
    dq.push_back(1);
    dq.push_front(2);
    dq.push_back(3);
    dq.push_front(4);

    cout<<dq.size()<<endl;

    for(auto it =dq.begin(); it!=dq.end();it++)
        cout<<*it;
    cout<<endl;

    dq.pop_front();
    for(auto it =dq.begin(); it!=dq.end();it++)
        cout<<*it;
    cout<<endl;

    dq.pop_back();
    for(auto it =dq.begin(); it!=dq.end();it++)
        cout<<*it;
    cout<<endl;

    return 1;
}