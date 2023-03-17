#include <iostream>
#include <vector>
using namespace std;
typedef long long ll;

int main(){
    ios_base::sync_with_stdio(false); cout.tie(NULL); cin.tie(NULL);

    ll n, m; cin>>n>>m;
    vector<ll> sum(n+1, 0);
    vector<ll> rem(m, 0);

    ll tmp;
    for(ll i=1;i<=n;i++){
        cin>>tmp;
        sum[i]=sum[i-1]+tmp;
    }

    ll res=0;
    for(ll i=1;i<=n;i++){
        ll remainder=sum[i]%m;

        if(remainder==0) ++res;
        ++rem[remainder];
    }
    for(ll i=0;i<m;i++){
        if(rem[i]>1){
            res+=(rem[i]*(rem[i]-1)/2);
        }
    }
    cout<<res;
}