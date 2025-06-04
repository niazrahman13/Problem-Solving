#include <bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'

int main() {

    optimize();

    int t;
	cin>>t;

	for(int i = 0 ; i < t ; i++){
	   
	   float x,y,z;
	   cin>>x>>y>>z;
	   
	   if((x+y) / 2 > z){
	       cout<<"YES"<<endl;
	   }else{
	       cout<<"NO"<<endl;
	   }
	   
	}
    


    return 0;
}
