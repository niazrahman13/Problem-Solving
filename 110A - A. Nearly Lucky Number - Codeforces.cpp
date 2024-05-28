#include<bits/stdc++.h>
using namespace std;
 
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
 
int main(){
    optimize()
 
    string s;
    cin >> s;
    int total = 0;
 
    for (auto u : s){
        int x = u - '0';
        if (x == 4 || x == 7){
            total = total + 1;
        }
    }
    if (total == 4 || total == 7){
        cout << "YES";
    }
    else{
        cout << "NO";
    }
 
    return 0;
}
