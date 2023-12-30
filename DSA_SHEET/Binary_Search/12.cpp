#include <bits/stdc++.h>
using namespace std;

int pivotedBinarySearch(vector<int> array, int l, int r)
{

    if(array[0] < array[r])
        return 0;
    
    int m;
    while (r - l > 1)
    {

        m = l + (r - l) / 2;
        if (array[l] <= array[m])
            r = m;
        else if (array[m] <array[r])
            l = m;
    }

    if (array[l] < array[m])
        return l;
    return m;
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
    int pivot = pivotedBinarySearch(array, 0, size-1);
    cout<<array[pivot]<<endl;
    
    return 1;
}