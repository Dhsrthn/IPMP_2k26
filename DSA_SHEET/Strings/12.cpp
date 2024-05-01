#include <bits/stdc++.h>
using namespace std;

// check if anagram

int checkAnagram(string &str1, string &str2)
{

    int count[256] = {0};
    for (int i = 0; i < int(str1.size()); i++)
    {
        count[int(str1[i])]++;
    }
    for (int i = 0; i < int(str2.size()); i++)
    {
        count[int(str2[i])]--;
    }
    for (int i = 0; i < 256; i++)
    {
        if (count[i] != 0)
        {
            return -1;
        }
    }
    return 1;
}

int main()
{
    cout << "Enter string 1" << endl;
    string str1, str2;
    cin >> str1;
    cout << "Enter string 2" << endl;
    cin >> str2;
    // string str1="Hallo",str2="Alohl";
    cout << checkAnagram(str1, str2) << endl;
    return 1;
}