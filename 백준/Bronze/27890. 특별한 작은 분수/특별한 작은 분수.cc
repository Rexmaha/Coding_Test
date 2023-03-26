#include <iostream>
#include <math.h>
using namespace std;
typedef long long ll;

int main(){
    ios_base::sync_with_stdio(false); cout.tie(NULL); cin.tie(NULL);

    ll res, n; cin>>res>>n;

    for(int i=0;i<n;i++){
        if(res%2==0) res=(res/2)^6;
        else res=(2*res)^6;
    }
    cout<<res;
}