#include<bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n';

int main(){
 
    optimize()

    int n;
    string s;
    cin>>n;
    char c;

    for(int i = 0; i<n;i++){
        cin>>c;
        s.push_back(c);
    };
    int anton,danik;
    anton = 0;
    danik = 0;

    for (auto u : s){
        if (u == 'A') anton = anton +1;
        if (u == 'D') danik = danik +1;
    };

if (anton > danik) {cout<<"Anton";}
else if (anton < danik) {cout<<"Danik";}
else if ( anton == danik) {cout<<"Friendship";}


};


