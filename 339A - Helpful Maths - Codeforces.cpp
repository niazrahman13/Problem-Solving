USING Priority Queue Data Structure and it Takes more time

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

USING Vector, take less time than PQ

#include<bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n';

int main(){
 
    optimize()

    string Test;
    cin>>Test;
    vector<int> test;

    for(auto i : Test) {
        if(i != '+'){
            int x = i-'0';

        test.push_back(x);
            
        };
    };
    sort(test.begin(),test.end());
    for(auto u : test){
        cout<<u;
        test.pop_back();
        if(test.size() != 0){
            cout<<'+';
        };
    };
};


