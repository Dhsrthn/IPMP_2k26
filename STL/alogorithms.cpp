#include <bits/stdc++.h>
using namespace std;

bool predicate(int i, int j){
    return (i>j);
}

int main(){

    //find
    vector <int> array ={1,2,3,4,5,6,7,8};
    int elem =4;
    auto it = find(array.begin(), array.end(), elem);
    cout<<elem<<" found in array at index";
    cout<<it-array.begin()<<endl;

    //search
    vector <int> array2 ={ 3,4,5};
    it = search(array.begin(), array.end(), array2.begin(), array2.end());
    if(it != array.end()){
    cout<<"Array 2 found in Array at index ";
    cout<<it-array.begin()<<endl;
    }else{
        cout<<"Array 2 not found in Array"<<endl;
    }

    //search with predicate 
    it = search(array.begin(), array.end(), array2.begin(), array2.end(),predicate);
    if(it != array.end()){
    cout<<"Array 2 elements lesser than Array 1 elements from index ";
    cout<<it-array.begin()<<endl;
    }else{
        cout<<"Array 1 elements are not lesser than Array 1 elements"<<endl;
    }   

    //lower_bound -- first element in vector not less than 
    it = lower_bound(array.begin(), array.end(), 3);
    cout<<*it<<endl;
    //upper_bound -- first element in vector greater than
    it = upper_bound(array.begin(), array.end(), 3);
    cout<<*it<<endl;
    //if not present, returns end iterator

    return 1;
}