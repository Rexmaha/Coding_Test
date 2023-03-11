#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cout.tie(NULL); cin.tie(NULL);

    int t; cin>>t;

    while(t--){
        int n; cin>>n;
        vector<int> v(n+1);

        for(int i=1;i<=n;i++) cin>>v[i];

        int cnt=count(v.begin(), v.end(), 2);

        if(cnt==0) cout<<1<<'\n';
        else if(cnt%2!=0) cout<<-1<<'\n';
        else{
            int id=cnt/2;
            int idx=0;

            for(int i=1;i<=n;i++){
                if(v[i]==2) ++idx;
                if(idx==id){
                    cout<<i<<'\n';
                    break;
                }
            }
        }
    }
}