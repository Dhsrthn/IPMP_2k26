#include <bits/stdc++.h>
using namespace std;

//first non repeating charecter
int firstNonRepeat(string str){
    //extended ascii 256 char
    int count[256];
    for(int i=0;i<int(str.size());i++){
        count[int(str[i])]++;
    }

    for(int i=0;i<int(str.size());i++){
        if(count[int(str[i])]==1){
            return i;
        }
    }
    return -1;
}

int main(){
    cout<<"Enter a string"<<endl;
    string str;
    cin>>str;
    // string str="Hello";
    int index=firstNonRepeat(str);
    if(index==-1){
        cout<<"No non repeating charecters"<<endl;
    }else{
        cout<<"First non repeating charecter is "<<str[index]<<endl;
    }
}