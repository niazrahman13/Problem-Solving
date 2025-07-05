#include <bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'

int main() {
    optimize();

    int t;
    cin >> t;

    for(int i = 0 ; i < t ; i++){
        
        string a,b;
        cin>>a>>b;

        char temp = a[0];
        a[0] = b[0];
        b[0] = temp;

        cout<<a<<' '<<b<<endl;
       
    }
    
}
