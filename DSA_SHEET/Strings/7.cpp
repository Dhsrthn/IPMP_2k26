#include <bits/stdc++.h>
using namespace std;

//rank of a string

int fact(int n)
{
    if (n == 0)
    {
        return 1;
    }

    return n * fact(n - 1);
}

int findSmaller(string &str, int l, int r)
{
    int count = 0;
    for (int i = l + 1; i < r; i++)
    {
        if (str[i] < str[l])
        {
            count++;
        }
    }
    return count;
}

int rankOf(string &str)
{
    map<int, int> factMap;
    int len = str.size();
    int multiplyBy = fact(len);
    int rank = 1;
    for (int i = 0; i < len; i++)
    {
        multiplyBy /= (len - i);
        int number = findSmaller(str, i, len);
        rank += multiplyBy * number;
    }
    return rank;
}

int main()
{

    string str;
    cout << "Enter a string" << endl;
    cin >> str;
    //string str="String";
    cout << "Rank of string is " << rankOf(str) << endl;
    return 1;
}

// get a string,
// fix the first letter hmmm
// string
// calculate 6!
// g,i,n,r,s,t
// fix ->s, 4*5!
// fix ->t, 4*4!
// fix ->r, 3*3!
// fix ->i, 1*2!
// fix ->n, 2*1!
// fix ->g, 0*0!