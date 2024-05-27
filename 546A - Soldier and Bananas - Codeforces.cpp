#include<bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n';

int main(){
 
    optimize()

    int total = 0;

    int first_banana,dollar,count_banana;

    cin>>first_banana>>dollar>>count_banana;

    for(int i = 1; i <= count_banana;i++) total = total + i* first_banana;
 
    int output = 0;

    if(total <= dollar){
        
        cout<<output;
    }else{
        output = total-dollar;
        cout<<output;
    };

    
};


