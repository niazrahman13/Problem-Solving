#include <bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'

int main() {
    optimize();

    int t;
    cin>>t;

    for(int i = 0 ; i < t ; i++){
       
        char arr[8][8]; 
        string s;
        for(int i = 0 ; i < 8 ; i++){
            for(int j = 0 ; j < 8 ; j++){
                char x;
                cin>>x;
                if(x >= 'a' && x <= 'z'){
                    s+=x;
                }
                arr[i][j] = x;
            } 
        }
        
        cout<<s<<endl;
        
        
    }
    
}
