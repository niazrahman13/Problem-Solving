#include <bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'

int main() {

    optimize();

    int t;
    cin>>t;

    for(int i = 0 ; i < t ; i++){

        int a,b;
        float total;
        cin>>a>>b;

        total = float(a) / 2;

        if(total <= b){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }


    }
    

    return 0;
}
