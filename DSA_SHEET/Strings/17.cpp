#include <bits/stdc++.h>
using namespace std;

// kmp

vector<int> kmp(string &haystack, string &needle)
{
    vector<int> answer;
    vector<int> LPS(needle.size(), 0);
    int prevLps = 0, i = 1;
    while (i < int(needle.size()))
    {
        if (needle[i] == needle[prevLps])
        {
            LPS[i] = prevLps + 1;
            prevLps++;
            i++;
        }
        else if (prevLps == 0)
        {
            LPS[i] = 0;
            i++;
        }
        else
        {
            prevLps = LPS[prevLps - 1];
        }
    }

    i = 0;     // haystack
    int j = 0; // needle
    while (i < int(haystack.size()))
    {
        if (haystack[i] == needle[j])
        {
            i++;
            j++;
        }
        else
        {
            if (j == 0)
                i++;
            else
            {
                j = LPS[j - 1];
            }
        }

        if (j == int(needle.size()))
        {
            answer.push_back(i - int(needle.size()));
        }
    }

    return answer;
}

// aabnshcaa
// 01

int main()
{
    // cout << "Enter the string on which the pattern is to be checked";
    // string str;
    // cin >> str;
    // cout << "Enter the pattern";
    // string pattern;
    // cin >> pattern;

    string str= "AAAXAAAAXAAAA";
    string pattern= "AAAA";

    vector <int> answer = kmp(str,pattern);
    for(int i=0; i< int(answer.size());i++){
        cout<<answer[i]<<endl;
    }



    return 1;
}