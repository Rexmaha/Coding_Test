#include <iostream>
using namespace std;
typedef long long ll;

int main(){
    ios_base::sync_with_stdio(false); cout.tie(NULL); cin.tie(NULL);
    
    ll n; cin>>n;
    cout<<n*(n-1)*(n-2)/6<<'\n'<<3;
}