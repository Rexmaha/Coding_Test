#include <iostream>
using namespace std;
typedef unsigned long long ull;

int main(){
    ios_base::sync_with_stdio(false); cout.tie(NULL); cin.tie(NULL);

    ull n; cin>>n;
    if(n==1) cout<<0;
    else if(n%2==0) cout<<n*n/2;
    else cout<<((n*n)-1)/2+1;
}