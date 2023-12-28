#include <bits/stdc++.h>
using namespace std;

struct comp{
    int first;
    int second;
};

bool compare(comp arr1, comp arr2){
    return arr1.first < arr2.first;
}

int main(){

    int array[] = {1, 4, 3, 65, 8, 3, 233, 54};

    sort(array, array + 8);
    for (int i = 0; i < 8; ++i)
        cout << array[i] << " ";

    int arr[] = {1, 4, 3, 65, 8, 3, 233, 54};
    cout << endl;
    sort(arr, arr + 8, greater<int>());
    for (int i = 0; i < 8; ++i)
        cout << arr[i] << " ";

    // sort in range
    int arr2[] = {1, 4, 3, 65, 8, 3, 233, 54};
    cout << endl;
    sort(arr2 + 3, arr2 + 8);
    for (int i = 0; i < 8; ++i)
        cout << arr2[i] << " ";

    // // sort with comparator function
    comp twoDarray[] = {{1, 2}, {3, 4}, {8, 9}, {7, 8}};
    cout << endl;
    sort(twoDarray, twoDarray + 4, compare);
    for (int i = 0; i < 4; i++){
        cout<< twoDarray[i].first<<"\t"<<twoDarray[i].second<<endl;
    }
    return 1;
}
