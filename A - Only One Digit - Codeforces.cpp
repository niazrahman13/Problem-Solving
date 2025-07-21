#include <bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'

int main() {
    optimize();

    int t;
    cin>>t;
    for(int i = 0 ; i < t ;i++){

        int n;
        cin>>n;

        string s = to_string(n);
        sort(s.begin(),s.end());

        cout<<s[0] - '0'<<endl;

    }
}
