#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
using namespace std;
typedef long long ll;

int main(){
    ios_base::sync_with_stdio(false); cout.tie(NULL); cin.tie(NULL);

    int n; cin>>n;
    vector<ll> vl(n);

    for(int i=0;i<n;i++) cin>>vl[i];
    sort(vl.begin(), vl.end());

    ll sum=accumulate(vl.begin(), vl.end(), 0);

    ll div=sum/n; ll rem=sum%n;

    vector<ll> fir(n-rem, div);
    vector<ll> sec(rem, div+1);
    fir.insert(fir.end(), sec.begin(), sec.end());

    ll res=0;
    for(int i=0;i<n;i++){
        if(vl[i]>fir[i]) break;
        res+=fir[i]-vl[i];
    }
    cout<<res;
}