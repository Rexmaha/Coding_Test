#include <iostream>
using namespace std;
typedef long long ll;

ll sum[100001];

int main(){
    ios_base::sync_with_stdio(false); cout.tie(NULL); cin.tie(NULL);

    int n, s; cin>>n>>s;
    int tmp;
    for(int i=1;i<=n;i++){
        cin>>tmp;
        sum[i]=sum[i-1]+tmp;
    }

    ll st_point=0, end_point=0;
    ll sum2=0, res=100002;
    
    while(1){
        if(st_point==n && end_point==n) break;

        if(sum2<s && end_point<n){
            ++end_point;
            sum2=sum[end_point]-sum[st_point];
        }
        else{
            if(end_point-st_point<res && sum2>=s){
                res=end_point-st_point;
            }
            ++st_point;
            sum2=sum[end_point]-sum[st_point];
        }
    }
    if(res==100002) cout<<"0";
    else cout<<res;
}