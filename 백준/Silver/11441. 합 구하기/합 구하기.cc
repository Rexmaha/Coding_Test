#include <iostream>
#include <vector>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cout.tie(NULL); cin.tie(NULL);
    int n; cin>>n;
    vector<int> v(n+1, 0);
    int tmp;
    for(int i=1;i<=n;i++) {
        cin>>tmp;
        v[i]=v[i-1]+tmp;
    }

    int q; cin>>q;
    while(q--){
        int i, j; cin>>i>>j;
        cout<<v[j]-v[i-1]<<'\n';
    }
}