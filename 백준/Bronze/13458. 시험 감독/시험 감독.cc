#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ios_base::sync_with_stdio(false); cout.tie(NULL); cin.tie(NULL);

    ll n; cin>>n;

    vector<ll> testCnt(n);
    for(ll i=0;i<n;i++){
        cin>>testCnt[i];
    }

    ll b, c; cin>>b>>c;
    ll res = n;
    for(ll i=0;i<n;i++){
        ll remCnt = testCnt[i] - b;

        if(remCnt > 0){
            ll remainder = remCnt % c;
            res += (remCnt / c);

            if(remainder != 0) res+=1;
        }
    }

    cout << res;
}