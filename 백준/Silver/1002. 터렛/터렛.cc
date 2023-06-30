#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int t; cin>>t;
    while(t--){
        int x1, y1, r1, x2, y2, r2; cin>>x1>>y1>>r1>>x2>>y2>>r2;

        int point_dis=(x2-x1)*(x2-x1)+(y2-y1)*(y2-y1);

        if(x1==x2 && y1==y2 && r1==r2) cout<<-1<<'\n';
        else if(point_dis==(r1+r2)*(r1+r2) || point_dis==(r1-r2)*(r1-r2)) cout<<1<<'\n';
        else if(point_dis<(r1-r2)*(r1-r2) || point_dis>(r1+r2)*(r1+r2)) cout<<0<<'\n';
        else cout<<2<<'\n';
    }
}