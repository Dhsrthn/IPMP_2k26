#include <bits/stdc++.h>
using namespace std;

int pivotedBinarySearch(vector<int> array, int l, int r)
{
    int m;
    while (r - l > 1)
    {
        m = l + (r - l) / 2;
        if (array[l] >= array[m])
            r = m;
        else if (array[m] > array[r])
            l = m;
    }

    if (array[l] > array[m])
        return l;
    return m;
}

int binarySearch(vector<int> array, int l, int r, int key)
{
    int m;
    while (r - l > 1)
    {
        m = l + (r - l) / 2;
        if (array[m] >= key)
            r = m;
        else if (array[m] <= key)
            l = m;
    }

    if (array[l] == key)
        return l;
    if (array[r] == key)
        return r;
    return -1;
}

int main()
{

    vector<int> array;
    int size;
    cout << "Enter number of elements you want to insert" << endl;
    cin >> size;
    for (int i = 0; i < size; i++)
    {
        cout << "Enter element" << endl;
        int k;
        cin >> k;
        array.push_back(k);
    }
    int key;
    cout << "Enter element to search" << endl;
    cin >> key;
    int pivot = pivotedBinarySearch(array, 0, size);
    int position;
    if (pivot == int(array.size()) - 1)
    {
        position = binarySearch(array, 0, size, key);
    }
    else if (key > array[0])
    {
        position = binarySearch(array, 0, pivot, key);
    }
    else if (key < array[0])
    {
        position = binarySearch(array, pivot + 1, size - 1, key);
    }
    if (position == -1)
    {
        cout << "Element not found" << endl;
    }
    else
    {
        cout << "Element found in position " << position << endl;
    }

    return 1;
}