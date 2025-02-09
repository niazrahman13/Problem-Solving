#include<bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n';

int main(){
    
    optimize()
    
    int A,B,C,D;
    cin>>A>>B>>C>>D;

    int SumofAB = A+B;
    int SumofCD = C+D;

    if(B > C && D > A && SumofCD > SumofAB && C > 0 && D > 0 && A % 2 == 0){
        cout<<"Valores aceitos"<<endl;
    }else{
        cout<<"Valores nao aceitos"<<endl;
    }

    return 0;
}
