#include <bits/stdc++.h>
#define FASTIO cin.tie(NULL); cout.tie(NULL); ios_base::sync_with_stdio(false);
using namespace std;

int main(){
    FASTIO

    int t1, e1, f1, t2, e2, f2;
    cin>>t1>>e1>>f1>>t2>>e2>>f2;

    int mex = t1*3+e1*20+f1*120;
    int mel = t2*3+e2*20+f2*120;

    if(mex == mel) cout<<"Draw";
    else if(mex>mel) cout<<"Max";
    else cout<<"Mel";
}