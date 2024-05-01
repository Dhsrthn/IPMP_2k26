#include <bits/stdc++.h>
using namespace std;

// atoi function

int Atoi(string &str)
{
    int i = 0;
    int len = str.size();
    int sign = 1;
    int value = 0;

    while (i < len && str[i] == ' ')
    {
        i++;
    }

    if (str[i++] == '-')
    {
        sign = -1;
    }

    while (str[i] >= '0' && str[i] <= '9')
    {
        if (value > INT_MAX / 10)
        {
            if (sign == 1)
            {
                return INT_MAX;
            }
            return INT_MIN;
        }
        value = 10 * value + (str[i++] - '0');
    }

    return value * sign;
}

int main()
{
    cout << "Enter a string" << endl;
    string str;
    cin >> str;
    // string str="    -2345"
    cout << "After converting " << Atoi(str) << endl;
    return 1;
}