#include <bits/stdc++.h>
using namespace std;

int main(){

    //Initializing
    vector <int> vec;

    //push_back()
    vec.push_back(1);
    vec.push_back(2);
    vec.push_back(3);

    vector <int> vect(3,10);

    vector <int> arrayLike {1,3,5};

    vector <int> fromAnother(vect.begin(),vect.end());

    for(int i=0; i<3;i++){
        cout<<"vec "<<vec[i]<<endl;
        cout<<"vect "<<vect[i]<<endl;
        cout<<"arrayLike "<<arrayLike[i]<<endl;
        cout<<"fromAnother "<<fromAnother[i]<<endl;
        cout<<endl;
    }

    //Iteration
    //begin() and end()
    for( auto it=vec.begin(); it!=vec.end(); it++)
        cout<<*it<<endl;
    cout<<endl;

    vector <int> empt;


    //empty() and size()
    cout<<empt.empty()<<endl;
    cout<<vec.empty()<<endl;
    cout<<vec.size()<<endl;


    cout<<endl;
    //front() and back()
    cout<<vec.front()<<endl;
    cout<<vec.back()<<endl;

    cout<<endl;
    //pop_back
    vec.pop_back();
    for(auto it=vec.begin();it!=vec.end();it++)
        cout<<*it<<endl;

    //insert
    cout<<endl;
    vec.insert(vec.begin()+1,1,3);
    for(auto it=vec.begin();it!=vec.end();it++)
        cout<<*it<<endl;
    
    cout<<endl;
    vec.insert(vec.begin(),vec.begin(),vec.end());
    for(auto it=vec.begin();it!=vec.end();it++)
        cout<<*it<<endl;
    
    //assign
    vector <int> v;
    v.assign(3,1);
    cout<<endl;
    for(auto it=v.begin();it!=v.end();it++)
        cout<<*it<<endl;

    //2d
    vector <vector <int>> twoD {{1,2,3},{4,5,6},{7,8}};
    
    //a 2d vector of 3 elements, each a vector with 2 zeroes initialized
    vector <vector <int>> dummy (3, vector<int> (2,0));

    //iterations
    cout<<endl;
    for(int i=0; i<twoD.size();i++){
        for(int j=0; j<twoD[i].size();j++){
            cout<<twoD[i][j]<<"\t";
        }
        cout<<endl;
    }

    cout<<endl;
    for (vector<int> vect1D : twoD) 
    { 
        for (int x : vect1D) 
        { 
            cout << x << " "; 
        }     
        cout << endl; 
    } 

    //3d
    vector<vector<vector<int>>> threeD (3, vector<vector<int>>(3, vector<int>(3,0)));

    cout<<endl;
    for(vector<vector<int>> vec2d: threeD){
        for(vector<int> oneD: vec2d){
            for(int x: oneD){
                cout<< x << " ";
            }
            cout<<"\t";
        }
        cout<<endl;
    }

    //all other functions work the same for 2d/3d
    return 0;
}