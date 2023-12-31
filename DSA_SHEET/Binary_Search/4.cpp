#include <bits/stdc++.h>
using namespace std;

vector<int> binarySearch(vector<int> array, int l, int r, int key)
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
        return {l, l};
    if (array[r] == key)
        return {r, r};

    return {l, r};
}

int main()
{
    vector<int> array;
    int size;
    cout << "Enter number of elements you want to insert" << endl;
    cin >> size;
    for (int i = 0; i < size; i++)
    {
        int k;
        cout << "Enter element" << endl;
        cin >> k;
        array.push_back(k);
    }
    cout << "Enter element to find floor and ceiling for" << endl;
    int key;
    cin >> key;

    // vector<int> array={1,2,3,4,5};
    // int size=5;
    // int key=3;

    if (key < array[0])
    {
        cout << "Floor does not exist" << endl;
        cout << "Ceil is " << array[0] << endl;
    }
    else if (key == array[0])
    {
        cout << "Floor is " << array[0] << endl;
        cout << "Ceil is " << array[0] << endl;
    }
    else if (key > array[size - 1])
    {
        cout << "Floor is " << array[size - 1] << endl;
        cout << "Ceil does not exist" << endl;
    }
    else if (key == array[size - 1])
    {
        cout << "Floor is " << array[size - 1] << endl;
        cout << "Ceil is " << array[size - 1] << endl;
    }
    else
    {
        vector<int> answer = binarySearch(array, 0, size - 1, key);
        cout << "Floor is " << array[answer[0]] << endl;
        cout << "Ceil is " << array[answer[1]] << endl;
    }
}