#include <iostream>
#include <vector>
using namespace std;
typedef long long ll;

int main(){
    ios_base::sync_with_stdio(false); cout.tie(NULL); cin.tie(NULL);
    
    ll n; cin>>n;
    if(n==0) {
        cout<<0;
        return 0;
    }

    ll res=1, current=1;
    while(current<n){
        current*=2;
        ++res;
    }
    cout<<res;
}