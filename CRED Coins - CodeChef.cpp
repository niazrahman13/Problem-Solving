#include <bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'

int main() {

    optimize();

    int t;
    cin>>t;

    for(int i = 0; i < t ; i++){
    
        int x,y,total = 0;
        cin>>x>>y;

        x = x * y;
        if(x < 100){
            cout<<0<<endl;
        }else if(x >= 100){
            if(x == 100){
                cout<<1<<endl;
            }else{
                while (x>=100)
                {   
                    total +=1;
                    x = x - 100;
                }
                cout<<total<<endl;
            }
        }
    }
    

    return 0;
}
