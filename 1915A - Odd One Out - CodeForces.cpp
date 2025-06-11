#include <bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'

int main() {
    optimize();
    
    int t;
    cin>>t;

    for(int i = 0 ; i < t ; i++){
        int x,y,z;
        cin>>x>>y>>z;

        if(x == y){
            cout<<z<<endl;
        }
        else if(x == z){
            cout<<y<<endl;
        }
        else if(y == z){
            cout<<x<<endl;
        }

    }

    return 0;
}
