#include <bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'


int main() {
    
   int t,mishka=0,chris=0;
   cin>>t;

    while(t--){
        
        int x,y;
        cin>>x>>y;

        if(x > y){
            mishka+=1;
        }else if(y > x){
            chris+=1;
        }
        
    }

        if(mishka > chris){
            cout<<"Mishka"<<endl;
        }else if(mishka < chris){
            cout<<"Chris"<<endl;
        }else if(mishka == chris){
            cout<<"Friendship is magic!^^"<<endl;
        }

    return 0;
}
