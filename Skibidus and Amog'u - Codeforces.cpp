#include <bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'

int main() {
    optimize();

    int t;
    cin >> t;
    

    for(int i = 0 ; i < t ; i++){
        string store = "";
        string s;
        cin>>s;

        if(s == "us"){
            cout<<'i'<<endl;
        }else{
            for(int i = 0 ; i < s.length()-2; i++){

                store += s[i];

            }

        store += 'i';
        cout<<store<<endl;
        }
    }
    
}
