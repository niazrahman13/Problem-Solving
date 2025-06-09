#include <bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'

int main() {

    optimize();
    
    int t;
    cin>>t;

    for(int i = 0 ; i < t ; i++){
        string s;
        cin>>s;

        if(s[0] == 'a'){
            cout<<"YES"<<endl;
        }else if(s[0] == 'b' && s[1] != 'c'){
            cout<<"YES"<<endl;
        }else if(s[0] == 'c' && s[1] == 'b'){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }
    

    return 0;
}
