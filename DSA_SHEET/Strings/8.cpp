#include <bits/stdc++.h>
using namespace std;

// run length encoding

void runLenEnc(string &str)
{
    int n = str.size();
    for (int i = 0; i < n; i++)
    {
        int start = i;
        char curr = str[i];
        while (i < n && curr == str[i + 1])
        {
            i++;
        }
        cout << str[i] << (i - start) + 1;
    }
}

int main()
{
    string str;
    cout << "Enter a string" << endl;
    cin >> str;
    // string str="Sdddttttringwwwwjjjj";
    cout << "RLE of string is" << endl;
    runLenEnc(str);
    return 1;
}