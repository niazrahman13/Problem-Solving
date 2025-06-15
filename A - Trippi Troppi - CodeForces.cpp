#include <bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'

int main() {

    int t;
    cin>>t;
    cin.ignore();
    
    for(int i = 0 ; i < t ; i++){
        string s;
        getline(cin,s);
        stringstream ss(s);
        string store;
        string total;

        while(ss >> store){
            
            total = total + store[0];
            
        }

        cout<<total<<endl;
    }

    return 0;
}
