#include <iostream>
using namespace std;
typedef long long ll;

int n, m, tmp;
ll a[100001];
ll s[100001];

int main(){
    ios_base::sync_with_stdio(false); cout.tie(NULL); cin.tie(NULL);

    cin>>n>>m;
    for(int i=1;i<=n;i++){
        cin>>a[i];
        s[i]=s[i-1]+a[i];
    }

    int i, j;
    while(m--){
        cin>>i>>j;
        cout<<s[j]-s[i-1]<<'\n';
    }
}