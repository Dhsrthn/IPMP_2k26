#include <bits/stdc++.h>
using namespace std;


double findMedian(vector <int> arr1, vector <int> arr2, int n){

    //first we find a number, such that the total number of elements in both arrays less than number, is n
    //then we find another number, such that the total number this time is n-1
    //average of 2 is median

    int l = INT16_MIN;
    int r= INT16_MAX;

    double median=0.0;
    
    while(l<=r){
        int m = l +(r-l)/2;

        int lessThan = (upper_bound(arr1.begin(), arr1.end(),m ) - arr1.begin()) + (upper_bound(arr2.begin(), arr2.end(), m)-arr2.begin());

        if(lessThan<=n)
            l=m+1;
        else 
            r=m-1;
    }
    median=l;
    l = INT16_MIN;
    r= INT16_MAX;
    while(l<=r){
        int m = l +(r-l)/2;

        int lessThan = (upper_bound(arr1.begin(), arr1.end(),m ) - arr1.begin()) + (upper_bound(arr2.begin(), arr2.end(), m)-arr2.begin());

        if(lessThan<=n-1)
            l=m+1;
        else 
            r=m-1;
    }
    median=(median+l)/2;
    return median;

}

int main(){

    vector<int> array1;
    int size; 
    cout << "Enter number of elements you want to insert" << endl;
    cin >> size;
    cout << "Enter elements in array 1" << endl;
    for (int i = 0; i < size; i++)
    {
        cout << "Enter element" << endl;
        int k;
        cin >> k;
        array1.push_back(k);
    }
    vector<int> array2;
    cout << "Enter elements in array 2 " << endl;
    for (int i = 0; i < size; i++)
    {
        cout << "Enter element" << endl;
        int k;
        cin >> k;
        array2.push_back(k);
    }

    // vector<int> array1= {1,3,5,7,9};
    // vector<int> array2= {2,4,6,8,10};
    // int size=5;

    cout<<findMedian(array1,array2,size)<<endl;
    return 1;

}