#include<bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n';

int main(){
    
    optimize()

    int x,y;

    cin>>x>>y;

    if(y%x ==0 || x%y ==0){
        cout<<"Sao Multiplos"<<endl;
    }else{
        cout<<"Nao sao Multiplos"<<endl;
    }

    return 0;
}
