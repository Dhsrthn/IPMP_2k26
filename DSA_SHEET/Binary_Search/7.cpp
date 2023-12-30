#include <bits/stdc++.h>
using namespace std;

int fixedPointBinary(vector <int> array,int size){
    int l=0;
    int r=size-1;
    int m;
    while(r-l>1){
        m=l + (r-l)/2;
        if(array[m]==m)
            return m;
        if(array[m]>m){
            r=m-1;
        }else if(array[m]<m){
            l=m+1;
        }
    }
    if(array[l]==l)
        return l;
    if(array[r]==r)
        return r;
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
    int fixedPoint = fixedPointBinary(array,size);
    if(fixedPoint==-1){
        cout<<"No fixed point found"<<endl;
    }else{
        cout<<"Fixed point found at index "<<fixedPoint<<" with value "<<array[fixedPoint]<<endl;
    }
    return 1;
}

//does not return all fixed points
