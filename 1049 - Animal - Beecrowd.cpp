#include<bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n';

int main(){
    
    optimize()
    
    string str1,str2,str3;
    cin>>str1>>str2>>str3;
    
    if(str1 == "vertebrado" && str2 == "ave" && str3 == "carnivoro"){
        cout<<"aguia"<<endl;

    }else if(str1 == "vertebrado" && str2 == "ave" && str3 == "onivoro"){
        cout<<"pomba"<<endl;

    }
    else if(str1 == "vertebrado" && str2 == "mamifero" && str3 == "onivoro"){
        cout<<"homem"<<endl;

    }
    else if(str1 == "vertebrado" && str2 == "mamifero" && str3 == "herbivoro"){
        cout<<"vaca"<<endl;

    }
    else if(str1 == "invertebrado" && str2 == "inseto" && str3 == "hematofago"){
        cout<<"pulga"<<endl;
        
    }
    else if(str1 == "invertebrado" && str2 == "inseto" && str3 == "herbivoro"){
        cout<<"lagarta"<<endl;

    }else if(str1 == "invertebrado" && str2 == "anelideo" && str3 == "hematofago"){
        cout<<"sanguessuga"<<endl;

    }else if(str1 == "invertebrado" && str2 == "anelideo" && str3 == "onivoro"){
        cout<<"minhoca"<<endl;
    }

    return 0;
}
