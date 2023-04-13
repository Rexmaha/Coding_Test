#include <iostream>
#include <vector>
using namespace std;
typedef long long ll;

int main(){
    ios_base::sync_with_stdio(false); cout.tie(NULL); cin.tie(NULL);

    ll g; cin>>g;
    ll x=2, y=1;
    vector<ll> ans;

    while(x>y){
        ll pre=x*x-y*y;

        if(pre==g) {
            ans.push_back(x);
            ++y;
        }
        else if(pre>g) ++y;
        else if(pre<g) ++x;
    }

    if(ans.empty()) cout<<-1;
    else{
        for(auto n:ans){
            cout<<n<<'\n';
        }
    }
}