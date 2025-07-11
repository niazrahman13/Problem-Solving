#include <bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'

int main() {
    optimize();

    int t;
    cin>>t;

    for(int i = 0 ; i < t ; i++){
        
        int temp, X = 0,Y = 0;
        cin>>temp;
        string s;
        cin>>s;

        for(auto i : s){
            if(i == 'U'){
                Y+=1;
            }else if(i == 'D'){
                Y-=1;
            }else if(i == 'L'){
                X-=1;
            }else if(i == 'R'){
                X+=1;
            }
            if(X == 1 && Y == 1){
                break;
            }
        }
        if(X == 1 && Y == 1){
                cout<<"YES"<<endl;
            }else{
                cout<<"NO"<<endl;
            }
        
    }
    
}
