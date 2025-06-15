#include <bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'

int main() {

    int x[100];
    int y[100];

    string a,b;
    cin>>a>>b;

    for(int i = 0 ; i < a.length(); i++){
        int one = a[i] - '0';
        int two = b[i] - '0';

        x[i] = one;
        y[i] = two;
    }

    for(int i = 0 ; i < a.length() ; i++){
        if(x[i] == y[i]){
            cout<<0;
        }else{
            cout<<1;
        }
    }
       

    return 0;
}
