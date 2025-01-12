#include <bits/stdc++.h>
#define FASTIO cin.tie(NULL); cout.tie(NULL); ios_base::sync_with_stdio(false);
using namespace std;

int main(){
    FASTIO

    int t; cin>>t;
    vector<int> swit(t+1, 0);
    for(int i=1;i<swit.size();i++){
        cin>>swit[i];
    }

    int n; cin>>n;
    while(n--){
        int gender, switchNum;
        cin>>gender>>switchNum;

        if(gender == 1){
            for(int i=1;i<=t/switchNum;i++){
                if(swit[i*switchNum] == 0) swit[i*switchNum] = 1;
                else swit[i*switchNum] = 0;
            }
        }
        else{
            int dis = 1;

            while(1){
                if(switchNum-dis == 0 || switchNum + dis == t+1) break;
                if(swit[switchNum-dis] != swit[switchNum+dis]) break;

                ++dis;
            }

            for(int i = switchNum-dis+1; i<=switchNum+dis-1; i++){
                if(swit[i] == 0) swit[i] = 1;
                else swit[i] = 0;
            }
        }
    }

    for(int i=1;i<swit.size();i++){
        cout<<swit[i]<<' ';
        if(i%20 == 0) cout<<'\n';
    }
}