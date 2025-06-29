#include <bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'

int main() {
    optimize();

   int t,n,total=0;
   cin>>t;

   for(int i = 0 ; i < t ; i++){

    cin>>n;
    total = (n % 10) + (n / 10);
    cout<<total<<endl;
   }
    
    return 0;
}
