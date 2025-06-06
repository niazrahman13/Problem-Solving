#include <bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'

int main() {

    optimize();

    int t,even = 0,odd = 0;
    
    cin>>t;
    for(int i = 0 ; i < t; i++){
        int x;
        cin>>x;

        if(x % 2 == 0){
            even++;
        }else{
            odd++;
        }
    }

    if(even > odd){
        cout<<"READY FOR BATTLE";
    }else if (even == odd){
        cout<<"NOT READY";
    }else{
        cout<<"NOT READY";
    }
    return 0;
}
