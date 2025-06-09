#include <bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'

int main() {

    optimize();

    int t,total = 0;
    cin>>t;
    
    int arr[t];
    
    for(int i = 0 ; i < t ; i++){

        string s;
        cin>>s;

        arr[i] = stoi(s);    

    }
    for(int i = 0 ; i < t-1 ; i++){

        if(arr[i] != arr[i+1]){
            total+=1;
        }

    }
    cout<<total+1<<endl;

    return 0;
}
