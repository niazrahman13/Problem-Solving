#include<bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n';

int main(){
    
    optimize()

    int x;

    vector<int> vec;

    for(int i = 0; i <3; i++){
        cin>>x;
        vec.push_back(x);
    }

    vector<int> vec2 = vec;

    sort(vec.begin(), vec.end());

    for(auto i : vec){
        cout<<i<<endl;
    }
    cout<<endl;
    for(auto i : vec2){
        cout<<i<<endl;
    }

    return 0;
}
