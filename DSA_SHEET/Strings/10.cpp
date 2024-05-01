#include <bits/stdc++.h>
using namespace std;

// first non repeating character

int firstNonRepeat(string &str)
{
    // 256 because extended ascii
    int count[256];

    for (int i = 0; i < int(str.size()); i++)
    {
        count[int(str[i])]++;
    }

    for (int i = 0; i < int(str.size()); i++)
    {
        if (count[int(str[i])] == 1)
        {
            return i;
        }
    }
    return -1;
}
int main()
{
    cout << "Enter a string" << endl;
    string str;
    cin >> str;
    // string str="halloworldha"
    int index = firstNonRepeat(str);
    if (index == -1)
    {
        cout << "No non repeating characters found" << endl;
    }
    else
    {
        cout << "First non repeating character is " << str[index] << endl;
    }
    return 1;
}