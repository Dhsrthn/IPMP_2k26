#include <bits/stdc++.h>
using namespace std;

//reverse words in a line
void reverseWords(string &str){
    vector <string> temp;
    string temps="";
    string reverseStr;
    int k=int(str.size());
    for(int i=0;i<k;i++){
        if(str[i]==' '){
            temp.push_back(temps);
            temps="";
        }else{
            temps+=str[i];
        }
    }
    temp.push_back(temps);
    for(int i=temp.size()-1;i>=0;i--){
    cout<<temp[i]<<" ";
    }
    cout<<endl;
    return;
}

int main(){
    cout<<"Enter a line"<<endl;
    string str;
    getline(cin,str);
    reverseWords(str);
    return 1;
}