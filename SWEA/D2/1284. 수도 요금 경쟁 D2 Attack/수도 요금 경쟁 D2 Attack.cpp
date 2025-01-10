#include <bits/stdc++.h>
using namespace std;
int testCase;

int main(){
    cin>>testCase;

    for(int testIdx=1;testIdx<=testCase;testIdx++){
        int p, q, r, s, w;
        cin>>p>>q>>r>>s>>w;

        int a = p*w;
        int b;
        if(r >= w){
            b = q;
        }
        else{
            b = q + (w-r)*s;
        }
        cout<<"#"<<testIdx<<" "<<(a<=b?a:b)<<'\n';
    }
}