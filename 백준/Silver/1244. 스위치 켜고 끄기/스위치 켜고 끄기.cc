#include <bits/stdc++.h>
#define FASTIO cin.tie(NULL); cout.tie(NULL); ios_base::sync_with_stdio(false);
using namespace std;

int main(){
    FASTIO

    int switchSize; cin>>switchSize;
    vector<int> switches(switchSize+1, 0);
    for(int i=1;i<switches.size();i++){
        cin>>switches[i];
    }

    int n; cin>>n;
    while(n--){
        int gender, switchNum;
        cin>>gender>>switchNum;

        if(gender == 1){
            for(int i = switchNum;i<=switchSize;i+=switchNum){
                switches[i] = 1 - switches[i];
            }
        }
        else{
            int dis = 1;

            while(1){
                if(switchNum-dis == 0 || switchNum + dis == switchSize+1) break;
                if(switches[switchNum-dis] != switches[switchNum+dis]) break;

                ++dis;
            }

            for(int i = switchNum-dis+1; i<=switchNum+dis-1; i++){
                switches[i] = 1 - switches[i];
            }
        }
    }

    for(int i=1;i<switches.size();i++){
        cout<< switches[i] << (i%20 == 0 ? '\n' : ' ');
    }
}