#include <bits/stdc++.h>
using namespace std;

int main(){
    int testCase; cin>>testCase;

    while(testCase--){
        int a, b, n; cin>>a>>b>>n;

        int res = 0;

        while(1){
            if(a >= b) b+=a;
            else a+=b;
            res++;

            if(a>n || b>n){
                cout<<res<<'\n';
                break;
            }
        }
    }
}