#include <bits/stdc++.h>
using namespace std;

int main(){

    //max heap
    priority_queue <int> pq;
    pq.push(1);
    pq.push(2);
    pq.push(13);
    pq.push(7);
    pq.push(9);

    while (!pq.empty()) {
        cout << pq.top() << ' ';
        pq.pop();
    }
    
    cout<<endl;
    //min heap
    priority_queue<int, vector<int>, greater<int>> pq2;
    pq2.push(1);
    pq2.push(2);
    pq2.push(13);
    pq2.push(7);
    pq2.push(9);
    while (!pq2.empty()) {
        cout << pq2.top() << ' ';
        pq2.pop();
    }

    return 1;
}