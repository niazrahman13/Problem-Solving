#include <bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'

int main() {

    optimize();

    int t;
    cin>>t;

    for(int i = 0 ; i < t ; i++){

        int a,b,x,y;
        cin>>a>>b>>x>>y;

        if(a * b == x * y){
            cout<<"YES"<<endl;
        }else if(a * b > x * y){
            cout<<"NO"<<endl;
        }else{
            cout<<"YES"<<endl;
        }


    }
    

    return 0;
}
