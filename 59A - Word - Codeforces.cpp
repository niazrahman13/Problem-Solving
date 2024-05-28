#include<bits/stdc++.h>
using namespace std;
 
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n';
 
int main(){
 
    optimize()
 
    string str;
    cin>>str;
    int Big = 0;
    int Small = 0;
    
    for (auto u : str){
 
        if(u >= 'A' && u <= 'Z'){
            Big = Big + 1;
        }
        else if(u >= 'a' && u <= 'z'){
            Small = Small + 1;
        };
 
    };
    if (Big > Small) {
        for(int i = 0; i< str.size(); i++){
            str[i] = toupper(str[i]);
        };
 
    } 
    else if(Big < Small){
        for(int i = 0; i< str.size(); i++){
            str[i] = tolower(str[i]);
        };
    }else if(Big == Small){
        for(int i = 0; i< str.size(); i++){
            str[i] = tolower(str[i]);
        };
    }
 
    cout << str << endl;
 
};
 
