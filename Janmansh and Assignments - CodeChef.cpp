#include <bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'

int main() {

    optimize();

    int t,total = 0;
	cin>>t;

    for(int i = 0 ; i < t ; i++){

        int x;
        cin>>x;

        x = 10-x;
        if(x == 3 || x > 3){
            cout<<"Yes"<<endl;
        }else{
            cout<<"No"<<endl;
        }

    }



    return 0;
}
