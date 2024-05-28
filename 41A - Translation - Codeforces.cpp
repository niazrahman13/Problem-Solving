#include<bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n';

int main(){
 
    optimize()

    string test1;
    string test2;
    string test3;

    cin>>test1;
    cin>>test2;

    for(int i = test2.size()-1; i>=0; i--){
        test3.push_back(test2[i]);
    };

    if(test1 == test3) cout<<"YES";
    else cout<<"NO";

};


