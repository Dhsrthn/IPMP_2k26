#include <bits/stdc++.h>
using namespace std;

int firstOccur(vector<int> array, int l, int r, int key)
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


int lastOccur(vector<int> array, int l, int r, int key)
{
    int m;
    while (r - l > 1)
    {
        m = l + (r - l) / 2;
        if (array[m] <= key)
            l = m;
        else if (array[m] >= key)
            r = m;
    }
    if (array[r] == key)
        return r;
    if (array[l] == key)
        return l;
    return -1;
}

int main(){
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
    cout << "Enter element to search occurrences of:" << endl;
    int key;
    cin>>key;

    // vector<int> array={1,2,3,3,3,3,4,4,5};
    // int size=9;
    // int key=3;

    int lPos=firstOccur(array,0,size-1,key);
    
    if(lPos==-1){
        cout<<"Element not found in array"<<endl;
        return 1;
    }else{
        int rPos= lastOccur(array,0,size-1,key);
        cout<<"Element occurs "<<rPos-lPos+1<<" times"<<endl;
        return 1;
    }
}

