#include <bits/stdc++.h>
using namespace std;

//print duplicates
void printDuplicates(string str){

    unordered_map <char, int> count;
    for(int i=0;i<int(str.size());i++){
        count[str[i]]++;
    }

    for(auto it:count){
        if(it.second >1){
            cout<<it.first<<" occured "<<it.second<<" times"<<endl;
        }
    }

    return;
}

int main(){
    cout<<"Enter a string"<<endl;
    string str;
    cin>>str;
    //string str="Helloworld";
    printDuplicates(str);
    return 1;
}