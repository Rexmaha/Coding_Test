#include <iostream>
#include <vector>
using namespace std;
int n, k;

int main(){
    ios_base::sync_with_stdio(false); cout.tie(NULL); cin.tie(NULL);

    cin>>n>>k;
    vector<int> sum(n+1, 0);
    for(int i=1;i<=n;i++){
        int tmp; cin>>tmp;
        sum[i]=sum[i-1]+tmp;
    }

    int max=-10000001;
    for(int i=n;i>=k;i--){
        int j=i-k;
        if(sum[i]-sum[j]>max) max=sum[i]-sum[j];
    }
    cout<<max;
}