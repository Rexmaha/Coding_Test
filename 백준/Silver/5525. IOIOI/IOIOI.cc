#include <iostream>
#include <string>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cout.tie(NULL); cin.tie(NULL);

    int n, m; cin>>n>>m;
    string s; cin>>s;

    string ioi="I";
    for(int i=0;i<n;i++) ioi+="OI";

    int cnt=0;
    for(int i=0;i<=m-(2*n+1);){
        int idx=s.find(ioi, i);
        if(idx==string::npos) break;
        else{
            ++cnt;
            i=idx+2;
        }
    }
    cout<<cnt;
}