#include <bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'

int main() {
    optimize();

    int t;
    cin>>t;

    while(t--){

        int n;
        cin>>n;

        string s;
        cin>>s;

        int count = 0,empty = 0,total=0;
        //WBBWBW
        for(int i = 0 ; i < n ; i++){
            
            if(s[i] == 'B'){
                count++;

                for(int j = s.length()-1; j >= i; j--){
                    if(s[j] == 'B'){
                        empty = j;
                        break;
                    }
                }

                for(int k = i; k <= empty; k++){
                    total++;
                }
                break;
            }

        }

        cout<<total<<endl;

    }

    return 0;
}
