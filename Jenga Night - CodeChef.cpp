#include <bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'

int main() {

    optimize();

    int t;
    cin>>t;

    for(int i = 0 ; i < t ; i++){

        int x,y;
        cin>>x>>y;

        if(x == y || y % x == 0){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }
    

    return 0;
}
