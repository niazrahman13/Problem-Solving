#include <bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'

int main() {
    optimize();

    string S;
    cin>>S;

    for(auto i = 0 ; i < S.length(); i++){
        if(S[i] == '.'){
            cout<<0;
        }else if(S[i] == '-'){
            if(S[i+1] == '-'){
                cout<<2;
                i+=1;
            }else if(S[i+1] == '.'){
                cout<<1;
                i+=1;
            }
        }
    }

    return 0;
}
