#include <iostream>
#include <vector>
using namespace std;

int n, m;

int main(){
    ios_base::sync_with_stdio(false); cout.tie(NULL); cin.tie(NULL);
    cin>>n>>m;
    vector<int> v(n+1);
    for(int i=1;i<=n;i++) v[i]=i;

    int i, j;
    while(m--){
        cin>>i>>j;

        int tmp=v[i];
        v[i]=v[j];
        v[j]=tmp;
    }
    for(int i=1;i<=n;i++) cout<<v[i]<<' ';
}