#include <bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'

int main() {
    optimize();

    int t;
    cin >> t;

    for(int i = 0 ; i < t ; i++){
        
        string s;
        cin>>s;

        for(int i = 0 ; i < s.length(); i++){
            if(s[i] == 'p'){
                s[i] = 'q';
            }else if(s[i] == 'q'){
                s[i] = 'p';
            }
        }
        reverse(s.begin(), s.end());
        cout<<s<<endl;
    }
    
}
