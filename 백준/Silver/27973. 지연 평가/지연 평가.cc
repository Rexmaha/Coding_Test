#include <iostream>
#include <vector>
using namespace std;
typedef long long ll;

int main(){
    ios_base::sync_with_stdio(false); cout.tie(NULL); cin.tie(NULL);
    
    ll s=1;

    int q; cin>>q;
    ll mul=1;

    while(q--){
        ll a, b; cin>>a;

        if(a==0){
            cin>>b;
            s+=b;
        }
        else if(a==1){
            cin>>b;
            mul*=b;
            s*=b;
        }
        else if(a==3){
            cout<<s<<'\n';
        }
        else if(a==2){
            cin>>b;
            s+=b*mul;
        }
    }
}