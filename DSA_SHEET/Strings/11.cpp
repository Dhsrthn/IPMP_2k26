#include <bits/stdc++.h>
using namespace std;

// strcmp

int strCompare(string &str1, string &str2)
{
    int i;
    for (i = 0; i < int(str1.size()) && i < int(str2.size()); i++)
    {
        if (str1[i] > str2[i])
        {
            return 1;
        }
        else if (str1[i] < str2[i])
        {
            return -1;
        }
    }

    if (i == int(str1.size()) && i == int(str2.size()))
    {
        return 0;
    }
    else
    {
        return i == int(str1.size()) ? -1 : 1;
    }
}

int main()
{
    cout << "Enter string 1" << endl;
    string str1, str2;
    cin >> str1;
    cout << "Enter string 2" << endl;
    cin >> str2;
    // string str1="h1llo", str2="hello";
    cout << strCompare(str1, str2);

    return 1;
}