#include <bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'

int main() {

    optimize();

    int t;
    cin>>t;

    for(int i = 0 ; i < t ; i++){

        int x;
        cin>>x;
        
        if(x <= 100){
            cout<<x<<endl;
        }else if(x > 100 && x <= 1000){
            cout<<x-25<<endl;
        }else if(x > 1000 && x <= 5000){
            cout<<x-100<<endl;
        }else if(x > 5000){
            cout<<x-500<<endl;
        }

    }
    

    return 0;
}
