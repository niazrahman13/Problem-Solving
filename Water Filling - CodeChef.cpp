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

       x = x+y+z;

       if(x == 0 || x == 1){
       
        cout<<"Water filling time"<<endl;
       }
       else if(x == 3 || x == 2){
       
        cout<<"Not Now"<<endl;
       }

    }
    

    return 0;
}
