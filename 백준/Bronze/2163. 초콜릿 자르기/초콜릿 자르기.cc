#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int n, m; cin>>n>>m;

    cout<<min((n-1)+(m-1)*n, (m-1)+(n-1)*m)<<'\n';
}