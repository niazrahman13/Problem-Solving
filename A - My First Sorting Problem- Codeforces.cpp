#include <bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'

int main() {
    optimize();

    int t;
    cin >> t;

    for(int i = 0 ; i < t ; i++){
        
        int a,b;
        cin>>a>>b;

        if(a > b){
            cout<< b << ' ' << a<<endl;
        }else{
            cout<<  a<< ' ' << b<<endl;
        }

       
    }
    
}
