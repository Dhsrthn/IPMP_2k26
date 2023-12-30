#include <bits/stdc++.h>
using namespace std;

void merge (vector<int> &MN, vector<int> N){
    int n= N.size();
    int m=MN.size() -n;

    int j=m+n-1;
    int i;
    for(i=m+n-1; i>=0;i--){
        if(MN[i]!=-1){
            MN[j]=MN[i];
            j--;
        }
    }

    i=n;
    j=0;
    int k=0;

    while(k< (m+n)){

        if((j==n) || ((i < (m+n)) && (MN[i] <= N[j]))){
            MN[k]=MN[i];
            i++;
            k++;
        }else{
            MN[k]=N[j];
            j++;
            k++;
        }
        
    }
}

int main(){
    vector <int> mPlusn= {1,2,-1,5,-1,7,-1,12};
    vector <int> N={3,10,11};
    merge(mPlusn, N);

    for(int x: mPlusn){
        cout<<x<<"\t";
    }
    cout<<endl;
    return 1;
}