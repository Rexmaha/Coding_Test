#include <iostream>
#include <vector>
using namespace std;
typedef long long ll;

int main(){
    ios_base::sync_with_stdio(false); cout.tie(NULL); cin.tie(NULL);

    ll n, m; cin>>n>>m;
    vector<ll> sum(n+1, 0);

    ll tmp;
    for(int i=1;i<=n;i++){
        cin>>tmp;
        sum[i]=sum[i-1]+tmp;
    }

    ll s=0, e=1, res=0;
    while(s<=e){
        tmp=sum[e]-sum[s];

        if(e==n){
            if(tmp==m) ++res;
            ++s;
            continue;
        }

        if(tmp<m) ++e;
        else if(tmp>m) ++s;
        else{
            ++res;
            ++e;
        }
    }
    cout<<res;
}