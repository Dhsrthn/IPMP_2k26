#include <bits/stdc++.h>
using namespace std;

int binarySearch(vector <int>array, int l, int r, int key){
    int m;
    
}

int main(){
    vector <int> array;
    int size;
    cout<<"Enter number of elements you want to insert"<<endl;
    cin>>size;
    for(int i=0;i<size;i++){
        int k;
        cout<<"Enter element"<<endl;
        cin>>k;
        array.push_back(k);
    }
    cout<<"Enter element to search"<<endl;
    int key;
    cin>>key;
    int position= binarySearch(array,0,size,key);
    if(position==-1){
        cout<<"Element not found"<<endl;
    }else{
        cout<<"Element found in position "<<position<<endl;
    }
    return 1;
}