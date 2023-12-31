#include <bits/stdc++.h>
using namespace std;

int findMax(vector <int> array, int l, int r){

    if(r-l<=1){
        if(array[r]>array[l])
            return array[r];
        return array[l];
    }
    int m = l+(r-l)/2;

    if(array[m]>array[m+1] && array[m]>array[m-1])
        return array[m];
    else if(array[m+1] > array[m])
        return findMax(array, m+1, r);
    else 
        return findMax(array, l, m-1);

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

    // vector<int> array={4,5,6,3,2};
    // int size=5;

    int highest = findMax(array,0,size-1);
    cout<<"Maximum element is "<<highest<<endl;

    return 1;
}