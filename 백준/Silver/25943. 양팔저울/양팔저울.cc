#include <iostream>
#include <cmath>
using namespace std;
typedef long long ll;
int n;

int main(){
    ios_base::sync_with_stdio(false); cout.tie(NULL); cin.tie(NULL);
    cin>>n;

    ll num, left=0, right=0;
    for (int i=1;i<=n;i++) {
        cin>>num;

        if(i==0 || left<=right) left+=num;
        else if(i==1 || left>right) right+=num;
    }

    ll remain=abs(left-right), res=0;
    ll chu[7]={100, 50, 20, 10, 5, 2, 1};
    for(int i=0;i<7;i++){
        if(remain>=chu[i]){
            res+=remain/chu[i];
            remain-=(remain/chu[i])*chu[i];
        }
    }
    cout<<res;
}