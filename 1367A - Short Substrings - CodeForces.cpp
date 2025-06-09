#include <bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'

int main() {
    optimize();
    
    int t;
    cin >> t;
    
    for (int i = 0; i < t; i++) {
        string s, extra, res;
        cin >> s;
        
        if (s.length() == 2) {
            cout << s << endl;
        } else {
            extra = s.substr(s.length() - 2);
            
            for (int i = 0; i < s.length() - 2; i += 2) {
                res.push_back(s[i]);
            }
            
            res.append(extra);
            cout << res << endl;
        }
    }
    
    return 0;
}
