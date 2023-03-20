#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
typedef long long ll;

int main(){
    ios_base::sync_with_stdio(false); cout.tie(NULL); cin.tie(NULL);

    ll n, m; cin>>n>>m;
    vector<ll> vl(n);

    for(ll i=0;i<n;i++) cin>>vl[i];
    sort(vl.begin(), vl.end());

    ll s=0, e=n-1, cnt=0;
    while(1){
        if(s>=e) break;

        if(vl[s]+vl[e]==m){
            ++s;
            --e;
            ++cnt;
        }
        else if(vl[s]+vl[e]<m){
            ++s;
        }
        else{
            --e;
        }
    }
    cout<<cnt;
}