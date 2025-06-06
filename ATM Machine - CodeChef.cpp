#include <bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'

int main() {

    optimize();

    int t,total = 0;
    cin>>t;

    for(int i = 0; i < t ; i++){
        int x,y;
        x = 0 ; y = 0 ;
        cin>>x>>y;

        for(int j = 0 ; j < x ; j++){
            int n;
            cin>>n;

            if(y >= n){
                y = y-n;
                cout<<1;
            }else{
                cout<<0;
            }
            
            
        }
        cout<<endl;
    }
    

    return 0;
}
