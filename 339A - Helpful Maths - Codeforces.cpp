#include<bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n';

int main(){
 
    optimize()

    string Test;
    cin>>Test;
    priority_queue <int,vector<int>,greater<int>>pq;

    for(auto i : Test) {
        if(i != '+'){
            int x = i-'0';

        pq.push(x);
            
        };
    };

    while(!pq.empty()){
        
            int x = pq.top();
            pq.pop();
            cout<<x;
            if(!pq.empty()){
                cout<<'+';
            };
        };
};


