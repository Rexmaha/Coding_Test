#include <iostream>
using namespace std;
typedef unsigned long long ull;

int l;
ull MOD=1000000007;
ull dp[5001];

void getdp(){
    dp[0]=1; dp[2]=1;
    for(int i=4;i<5001;i+=2){
        for(int j=0;j<=i;j+=2){
            dp[i]+=dp[j]*dp[i-j-2];
            dp[i]%=MOD;
        }
    }
}

int main(){
    ios_base::sync_with_stdio(false); cout.tie(NULL); cin.tie(NULL);

    int t; cin>>t;
    getdp();
    
    while(t--){
        cin>>l;
        cout<<dp[l]<<'\n';
    }
/*
    for(int i=2;i<=100;i+=2){
        cout<<"n = "<<i<<", 결과 = "<<dp[i]<<'\n';
    }*/
}