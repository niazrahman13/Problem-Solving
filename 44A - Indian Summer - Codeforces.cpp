#include <bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'

int main() {
    
    optimize();

    int t;
    cin>>t;

    vector<pair<string,string>> v;

    while(t--){
        
        string x,y;
        cin>>x>>y;

        
        auto it = find(v.begin(), v.end(), make_pair(x,y));
        
        if(it == v.end()){
            v.push_back({make_pair(x,y)});
        }
    }
    cout<<v.size();

    return 0;
}
