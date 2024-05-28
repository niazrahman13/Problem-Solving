#include<bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n';

int main(){
 
    optimize()

    int n;
    cin>>n;
    string s;
    int total = 0;

    string see = "codeforces";

    for(int i = 0; i<n;i++){
        cin>>s;
        for(int i = 0; i < s.size(); i++){
            if(s[i] != see[i]){
                total = total+1;
            };
        };
        cout<<total<<endl;
        total = 0;
    };

};


