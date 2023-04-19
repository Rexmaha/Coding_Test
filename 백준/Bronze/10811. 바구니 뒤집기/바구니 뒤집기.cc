#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int n, m;

int main(){
    ios_base::sync_with_stdio(false); cout.tie(NULL); cin.tie(NULL);

    cin>>n>>m;
    vector<int> v(n+1, 0);
    for(int i=1;i<=n;i++) v[i]=i;

    while(m--){
        int i, j; cin>>i>>j;

        for(int k=i;k<=(i+j)/2;k++){
            swap(v[k], v[i+j-k]);
        }
    }
    for(int i=1;i<=n;i++){
        cout<<v[i]<<' ';
    }
}