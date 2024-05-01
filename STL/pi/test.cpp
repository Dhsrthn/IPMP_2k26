// given array, most frequent element

#include <bits/stdc++.h>
using namespace std;

int mostFreq(vector<int> array)
{
    unordered_map<int, int> map;

    for (int i = 0; i < array.size(); i++)
    {
        map[array[i]]++;
    }

    pair<int, int> maxFreq;
    maxFreq = {0, -1};

    for (int i = 0; i < array.size(); i++)
    {
        if (map[array[i]] > maxFreq.first)
        {
            maxFreq.first = map[array[i]];
            maxFreq.second = i;
        }
    }

    return array[maxFreq.second];
}

int fib(int n, vector<int> &table)
{
    if (table[n] != -1)
        return table[n];

    if (n < 1)
    {

        table[n] = n;
    }
    else
    {

        table[n] = fib(n - 1, table) + fib(n - 2, table);
    }

    return table[n];
}

void mergeSort(vector<int> &array, int l, int r)
{
    if (r <= l)
        return;

    int mid = l + (r - l) / 2;

    mergeSort(array, l, mid);
    mergeSort(array, mid + 1, r);
    // merge (array,l,m,r)
}

void sortArray(vector<int> &array)
{
    priority_queue<int> map;

    for (int i = 0; i < array.size(); i++)
    {
        map.push(array[i]);
    }
    for (int i = 0; i < array.size(); i++)
    {
        int k = map.top();
        map.pop();
        array[i] = k;
    }
}
