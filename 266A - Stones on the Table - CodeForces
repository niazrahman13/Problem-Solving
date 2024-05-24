#include<bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n';

int main(){
 
    optimize()

    int n;
    cin>>n;
    char Y;
    
    int count = 0;

    vector<char> x;

    for(int i = 0; i<n;i++){
        cin>>Y;
        x.push_back(Y);
    }
    

    for(int i = 0; i<x.size();i++){
        if(i+1 != x.size()){
            if(x[i] == x[i+1]){
                count = count + 1;
            };
        };
    };
    cout<<count;
};
