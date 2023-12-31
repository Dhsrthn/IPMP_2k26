#include <bits/stdc++.h>
using namespace std;

int Longestlength(vector <int> array, int size){
    vector <int> second;
    second.push_back(array[0]);
    for(int i=1; i<size; i++){
        if(array[i] > second.back()){
            second.push_back(array[i]);
           
        }else{
            second[lower_bound(second.begin(), second.end(), array[i])-second.begin()]=array[i]; 
        }
    }

    return second.size();
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
    // vector<int> array={10,11,23,1,3,56,78,45};
    // int size=8;
    cout<<Longestlength(array,size)<<endl;;
    return 1;
}