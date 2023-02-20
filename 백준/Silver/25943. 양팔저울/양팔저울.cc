#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
typedef long long ll;
int n;

int main(){
    ios_base::sync_with_stdio(false); cout.tie(NULL); cin.tie(NULL);
    cin>>n;

    vector<ll> v(n+1);
    ll left=0, right=0;
    for (int i = 1; i <= n; i++)
    {
        cin>>v[i];

        if(i==0 || left<=right) left+=v[i];
        else if(i==1 || left>right) right+=v[i];
    }
    //cout<<"left = "<<left<<", right = "<<right<<'\n';

    ll remain=abs(left-right);
    ll res=0;
    vector<ll> chu={100, 50, 20, 10, 5, 2, 1};
    for(int i=0;i<7;i++){
        //cout<<"i = "<<i<<", remain = "<<remain<<", res = "<<res<<'\n';
        if(remain>=chu[i]){
            res+=remain/chu[i];
            remain-=(remain/chu[i])*chu[i];
        }
    }
    cout<<res;
}