#include <iostream>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cout.tie(NULL); cin.tie(NULL);
    int k, n, m; cin>>k>>n>>m;

    if(k*n<=m) cout<<0;
    else cout<<k*n-m;
}