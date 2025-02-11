#include<bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n';

int main(){
    
    optimize();

    int n,total;
    cin>>n;
    total = 0;

    for(int i = n ; i <= 100 ; i++){
        if( i % 2 != 0){
            cout<<i<<endl;
            total+=1;
        }
        if(total == 6){
            break;
        }
    }

    return 0;
}
