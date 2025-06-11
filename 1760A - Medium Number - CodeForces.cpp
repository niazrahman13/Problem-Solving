#include <bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'

int main() {
    optimize();
    
    int t;
    cin>>t;

    for(int i = 0 ; i < t ; i++){
        int x,y,z,max_num,min_num,total;
        cin>>x>>y>>z;

        max_num = max({x,y,z});
        min_num = min({x,y,z});

        total = (x+y+z) - (max_num+min_num);

        cout<<total<<endl;
    }

    return 0;
}
