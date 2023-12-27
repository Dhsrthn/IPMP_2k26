#include <bits/stdc++.h>
using namespace std;

int main()
{
    queue<int> q;

    // push
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);

    // front
    cout << q.front() << endl;

    // empty
    cout << q.empty() << endl;

    // size
    cout << q.size() << endl;

    // pop
    while (!q.empty())
    {
        cout << q.front() << " size-> " << q.size() << endl;
        q.pop();
    }

    q.push(1);
    q.push(2);
    q.push(3);

    // back
    cout << q.back() << endl;

    queue<int> q2;

    q2.push(4);
    q2.push(5);
    q2.push(6);
    q2.push(7);

    // swap
    q.swap(q2);

    cout << endl;
    while (!q.empty())
    {
        cout << q.front() << endl;
        q.pop();
    }
    cout << endl;
    while (!q2.empty())
    {
        cout << q2.front() << endl;
        q2.pop();
    }

    return 1;
}