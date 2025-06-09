#include <bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'

int main() {
    optimize();
    
    int t,total1,total2,count;
    cin >> t;
    
    for (int i = 0; i < t; i++) {
        string s;
        cin >> s;  

        int total1 = s[0] - '0' + s[1] - '0' + s[2] - '0';
        int total2 = s[3] - '0' + s[4] - '0' + s[5] - '0';

        if (total1 == total2) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    
    return 0;
}
