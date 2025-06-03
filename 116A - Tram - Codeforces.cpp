#include <bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'

int main() {

    optimize();

    int t,x,y,total = 0,sum = 0;
    cin>>t;

    for(int i = 0 ; i < t ; i++){

        if(total > sum){
            sum = total;
        }

        cin>>x>>y;

        total = total - x;
        total = total + y;

    }

    cout<<sum;


    return 0;
}
