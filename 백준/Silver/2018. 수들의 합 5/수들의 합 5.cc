#include <iostream>
using namespace std;
typedef long long ll;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    ll n; cin>>n;

    ll cnt=1, sum=1, start_point=1, end_point=1;

    while(end_point!=n){
        if(sum==n){
            ++cnt;
            ++end_point;
            sum+=end_point;
        }
        else if(sum<n){
            ++end_point;
            sum+=end_point;
        }
        else{
            sum-=start_point;
            ++start_point;
        }
    }

    cout<<cnt;
}