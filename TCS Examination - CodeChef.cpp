#include <bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'

int main() {

    optimize();

    int t, Dragon = 0, Sloth = 0;
    cin>>t;

    for(int i = 0; i < t ; i++){
        
        int DDSA = 0,DTOC = 0,DDM = 0;
        int SDSA = 0,STOC = 0,SDM = 0;

        cin>>DDSA>>DTOC>>DDM;
        cin>>SDSA>>STOC>>SDM;

        Dragon = DDSA + DTOC + DDM;
        Sloth = SDSA + STOC + SDM;

        if(Dragon > Sloth){
            cout<<"DRAGON"<<endl;
        }
        else if(Sloth > Dragon){
            cout<<"Sloth"<<endl;
        }
        else if(Dragon == Sloth){
            
            if(DDSA > SDSA){
                cout<<"DRAGON"<<endl;
            }
            else if(SDSA > DDSA){
                cout<<"SLOTH"<<endl;
            }
            else if(DDSA == SDSA){
                
                if(DTOC > STOC){
                    cout<<"DRAGON"<<endl;
                }
                else if(STOC > DTOC){
                    cout<<"SLOTH"<<endl;
                }
                else{
                    cout<<"TIE"<<endl;
                }
            }
    }
    
    }
    return 0;
}
