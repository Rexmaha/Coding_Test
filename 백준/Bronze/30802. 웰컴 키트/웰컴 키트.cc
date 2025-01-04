#include <bits/stdc++.h>
#define FASTIO cin.tie(NULL); cout.tie(NULL); ios_base::sync_with_stdio(false);
using namespace std;

int n, t, p, res;
vector<int> sizeV;

int getQuo(int num, int div){
    if(num<=0) return 0;
    return (num-1)/div+1;
}

int main(){
    FASTIO

    cin>>n;

    int size;
    for(int i=0;i<6;i++){
        cin>>size;
        sizeV.push_back(size);
    }

    cin>>t>>p;
    
    for(int i=0;i<6;i++){
        res+=getQuo(sizeV[i], t);
    }

    cout<<res<<'\n';
    cout<<n/p<<' '<<n%p;
}