#include <bits/stdc++.h>
using namespace std;


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

    vector <int> tempArray=array;
    sort(tempArray.begin(), tempArray.end());
    int len;

    for(int i=0;i<size;i++){
        if(array[i]!=tempArray[i]){
            len=i;
            break;
        }
    }

    for(int i=size-1; i>=0;i--){
        if(array[i]!=tempArray[i]){
            len=i-len+1;
            break;
        }
    }
    cout<<len<<endl;
    return 1;
    
}
