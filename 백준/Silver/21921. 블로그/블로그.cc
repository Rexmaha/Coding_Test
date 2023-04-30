#include <iostream>
#include <vector>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cout.tie(NULL); cin.tie(NULL);
    
    int n, x; cin>>n>>x;

    vector<int> sum(n+1, 0);
    int tmp;
    for(int i=1;i<=n;i++){
        cin>>tmp;
        sum[i]=sum[i-1]+tmp;
    }

    int s=0;
    int maxVisitor=0, cnt=0;
    while(1){
        int e=s+x;
        if(e==n+1) break;

        if(maxVisitor<sum[e]-sum[s]){
            maxVisitor=sum[e]-sum[s];
            cnt=1;
        }
        else if(maxVisitor==sum[e]-sum[s]){
            ++cnt;
        }
        ++s;
    }

    if(maxVisitor==0) cout<<"SAD";
    else cout<<maxVisitor<<"\n"<<cnt;
}