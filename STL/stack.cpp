#include <bits/stdc++.h>
using namespace std;

int main()
{
    stack<int> stk;

    // push
    stk.push(1);
    stk.push(2);
    stk.push(3);
    stk.push(4);
    stk.push(5);
    stk.push(6);
    stk.push(7);
    stk.push(8);
    stk.push(9);
    stk.push(10);

    // top
    cout << stk.top() << endl;

    // empty
    cout << stk.empty() << endl;

    // size
    cout << stk.size() << endl;

    // pop
    while (!stk.empty())
    {
        cout << stk.top() << " size-> " << stk.size() << endl;
        stk.pop();
    }

    stk.push(1);
    stk.push(2);
    stk.push(3);

    stack<int> stk2;

    stk2.push(4);
    stk2.push(5);
    stk2.push(6);
    stk2.push(7);

    // swap
    stk.swap(stk2);

    cout << endl;
    while (!stk.empty())
    {
        cout << stk.top() << endl;
        stk.pop();
    }
    cout << endl;
    while (!stk2.empty())
    {
        cout << stk2.top() << endl;
        stk2.pop();
    }

    return 1;
}