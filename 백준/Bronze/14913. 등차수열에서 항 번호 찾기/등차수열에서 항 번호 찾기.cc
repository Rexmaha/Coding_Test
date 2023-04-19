#include <iostream>
using namespace std;
typedef long long ll;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    ll a, d, k; cin>>a>>d>>k;

    if(((k-a)%d)!=0) cout<<"X";
    else {
        if(((k-a)/d+1)<1) cout<<"X";
        else cout<<(k-a)/d+1;
    }
}