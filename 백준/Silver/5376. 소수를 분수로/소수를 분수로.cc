#include <iostream>
#include <string>
#include <math.h>
using namespace std;
typedef long long ll;

ll get_gcd(ll a, ll b){
    ll mod=a%b;

    while(mod>0){
        a=b;
        b=mod;
        mod=a%b;
    }
    return b;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int t; cin>>t;
    while(t--){
        string sosu; cin>>sosu;
        bool paren=false;

        string non_repeat="", repeat="";
        for(int i=2;i<sosu.length();i++){
            if(sosu[i]=='(') {
                paren=true;
                continue;
            }
            if(sosu[i]==')') continue;
            
            if(paren){
                repeat+=sosu[i];
            }
            else{
                non_repeat+=sosu[i];
            }
        }

        ll bunmo, bunja, gcd;
        if(!paren){
            bunmo=pow(10, non_repeat.length());
            bunja=stoll(non_repeat);
        }
        else{
            bunmo=pow(10, (non_repeat+repeat).length())-pow(10, non_repeat.length());
            bunja=stoll(non_repeat+repeat);
            if(non_repeat!="") bunja-=stoll(non_repeat);
        }
        gcd=get_gcd(bunmo, bunja);
        cout<<bunja/gcd<<'/'<<bunmo/gcd<<'\n';
    }
}