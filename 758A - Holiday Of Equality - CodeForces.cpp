#include <bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'

int main() {
    optimize();
    
    int t,max,total=0;
    cin>>t;
    int arr[t];

    for(int i = 0 ; i < t ; i++){        
        cin>>arr[i];
    }           
        if(t == 1){
            total= 0;
        }else{
            max = *max_element(arr,arr+t);
            
            for(int i = 0 ; i < t ; i++){
                if(arr[i] != max){
                    total = total + (max-arr[i]);
                }
            }
        }
    
    cout<<total;
    return 0;
}
