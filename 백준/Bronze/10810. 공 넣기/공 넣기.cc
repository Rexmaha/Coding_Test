#include <iostream>
#include <vector>
using namespace std;

int n, m;

int main(){
    ios_base::sync_with_stdio(false); cout.tie(NULL); cin.tie(NULL);
    cin>>n>>m;

    vector<int> ball(n+1, 0);

    int i, j, k;
    while(m--){
        cin>>i>>j>>k;
        for(int idx=i;idx<=j;idx++){
            ball[idx]=k;
        }
    }
    for(int i=1;i<=n;i++){
        cout<<ball[i]<<' ';
    }
}