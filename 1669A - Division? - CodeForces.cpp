#include <bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'

int main() {

    int t;
    cin >> t;

    for(int i = 0 ; i < t ; i++){

        int x;
        cin >> x;

        if(x <= 1399){
            cout<<"Division 4"<<endl;
        }else if(1400 <= x && x <= 1599){
            cout<<"Division 3"<<endl;
        }else if(1600 <= x && x <= 1899){
            cout<<"Division 2"<<endl;
        }else if(1900 <= x){
            cout<<"Division 1"<<endl;
        }
    }    

    return 0;
}
