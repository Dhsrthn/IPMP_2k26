#include <bits/stdc++.h>
using namespace std;

//print all permutations

void allPermutations(string &str, int l, int r){

    if(l==r){
        cout<<str<<endl;
        return;
    }else{
        for(int i=l;i<=r;i++){
            swap(str[l],str[i]);
            allPermutations(str,l+1,r);
            swap(str[l],str[i]);
        }
    }
}

int main(){
    cout<<"Enter string"<<endl;
    string str;
    cin>>str;
    // string str="Hai";
    cout<<"All permutations of given string: "<<endl;
    allPermutations(str,0,str.size()-1);
    return 1;
}