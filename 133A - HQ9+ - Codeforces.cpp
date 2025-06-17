#include <bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'

int main() {

    string s;
    cin>>s;
    int count = 0;

    for(int i = 0 ; i < s.length(); i++){
        if(s[i] == 'H' || s[i] == 'Q' || s[i] == '9'){
            count+=1;
            break;
        }
    }
    if(count >= 1){
        cout<<"YES";
    }else{
        cout<<"NO";
    }

    return 0;
}
