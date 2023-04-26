#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int n, m, b, resT, t, resH, h;
vector<int> v;

bool ck(int num){
    int bTmp=b;
    t=0; h=num;
    for(int i=0;i<n*m;i++){
        if(num>v[i]){
            if(num-v[i]>bTmp) return false;
            else {
                bTmp-=num-v[i];
                t+=num-v[i];
            }
        }
        else if(num<v[i]){
            bTmp+=v[i]-num;
            t+=2*(v[i]-num);
        }
    }
    return true;
}

int main(){
    ios_base::sync_with_stdio(false); cout.tie(NULL); cin.tie(NULL);
    
    cin>>n>>m>>b;
    v=vector<int>(n*m+1);
    resH=-1, resT=200000000;

    for(int i=0;i<n*m;i++) cin>>v[i];
    sort(v.begin(), v.end(), greater<>());

    for(int i=0;i<=256;i++){
        if(ck(i) && (resT>t || (resT==t && resH<h))){
            resT=t;
            resH=h;
        }
        //cout<<"i = "<<i<<", resT = "<<resT<<", resH = "<<resH<<endl;
    }
    cout<<resT<<" "<<resH;
}