#include <bits/stdc++.h>
using namespace std;

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

int main(){
    vector <int> array;
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
    cout << "Enter element to search" << endl;
    int key;
    cin >> key;


    // vector<int> array={1,2,3,3,3,3,3,5};
    // int size=8;
    // int key=3;

    int position = binarySearch(array, 0, size-1, key);
    if (position == -1)
    {
        cout << "Element not found at all" << endl;
    }
    else
    {
        if(array[position+ ((size/2)-1)] == key){
            cout<<"True";
        }else{
            cout<<"False";
        }
    }
    return 1;
}