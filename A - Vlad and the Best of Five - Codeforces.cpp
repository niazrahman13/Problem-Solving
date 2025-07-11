#include <bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'

int main() {
    optimize();

    int t;
    cin>>t;

    for(int i = 0 ; i < t ; i++){
       
        string s;
        cin>>s;
        int count = 0,total = 5;
        sort(s.begin(), s.end());
        int n = 5;
        
        for(int i = 0 ; i < 5; i++){
            if(s[i] != 'B'){
                count+=1;
            }else if(s[i] == 'B'){
                break;
            }
        }
        total = total - count;

        if(total < count){
            cout<<'A'<<endl;
        }else{
            cout<<'B'<<endl;
        }

    }
    
}
