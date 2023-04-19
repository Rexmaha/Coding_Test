#include <iostream>
#include <vector>
using namespace std;
typedef long long ll;

int main(){
    ios_base::sync_with_stdio(false); cout.tie(NULL); cin.tie(NULL);

    int n; cin>>n;
    vector<ll> v(n+1, 3);

    for(int i=2;i<=n;i++){
        v[i]=2*v[i-1]-1;
    }
    cout<<v[n]*v[n];
}