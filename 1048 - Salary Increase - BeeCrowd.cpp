#include<bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n';

int main(){
    
    optimize()
    
    float num;
    cin >> num;
    float earned;
    int percentage;

    if(num >= 0 && num <=400.00){
        percentage = 15;
        earned = num * (15.0/100);
    }else if(num >= 400.01 && num <=800.00){
        percentage = 12;
        earned = num * (12.0/100);
    }else if(num >= 800.01 && num <=1200.00){
        percentage = 10;
        earned = num * (10.0/100);
    }else if(num >= 1200.01 && num <=2000.00){
        percentage = 7;
        earned = num * (7.0/100);
    }else if(num > 2000.00){
        percentage = 4;
        earned = num * (4.0/100);
    }


    float total = num + earned;
    
    cout<<fixed<<setprecision(2);

    cout<<"Novo salario: "<<total<<endl;
    cout<<"Reajuste ganho: "<<earned<<endl;
    cout<<"Em percentual: "<<percentage<<" %"<<endl;
    return 0;
}
