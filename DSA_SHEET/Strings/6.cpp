#include <bits/stdc++.h>
using namespace std;

//move even-index to end (assuming 0 indexed)
void moveEvenIndex(string &str){

    for(int i=0; i<int(str.size()/2);i++){
        char c=str[i];
        str.erase(i,1);
        str.push_back(c);
    }
    return;
}

int main(){
    cout<<"Enter a string"<<endl;
    string str;
    cin>>str;
    cout<<str<<endl;
    //string str="Helloworld";
    moveEvenIndex(str);
    cout<<str<<endl;
    return 1;
}