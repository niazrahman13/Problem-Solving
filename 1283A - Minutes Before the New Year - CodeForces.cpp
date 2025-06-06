#include <bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'

int main() {

    optimize();

    int t;
    cin>>t;

    for(int i = 0 ; i < t ; i++){
        
        int x=0,y=0,total = 0;
        cin>>x>>y;

        while(true){
            
            if(y == 60){
                x+=1;
                y=0;
            }

            if(x != 24 && y != 60){
                y+=1;
                total+=1;

            }else{
                break;
            }
        }
        cout<<total<<endl;
    }

    return 0;
}
