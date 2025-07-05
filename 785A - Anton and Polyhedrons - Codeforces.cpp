#include <bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'

int main() {
    optimize();

    int t,count = 0;
    cin >> t;

    for(int i = 0 ; i < t ; i++){
        
        string s;
        cin>>s;
        

        if(s == "Tetrahedron"){
            count+=4;
        }else if(s == "Cube"){
            count+=6;
        }else if(s == "Octahedron"){
            count+=8;
        }else if(s == "Dodecahedron"){
            count+=12;
        }else if(s == "Icosahedron"){
            count+=20;
        }

    }
    cout<<count;
    
}
