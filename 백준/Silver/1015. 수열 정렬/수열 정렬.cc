#include <bits/stdc++.h>
using namespace std;

bool compare(pair<int, int> a, pair<int, int>b){
    if(a.first == b.first){
        return a.second<b.second;
    }
    else{
        return a.first<b.first;
    }
}

int main(){
    ios_base::sync_with_stdio(false); cout.tie(NULL); cin.tie(NULL);

    int n, tmp; cin>>n;
    vector<pair<int, int>> vp(n);
    vector<int> ans(n);

    for(int i=0;i<n;i++){
        cin>>tmp;
        vp[i] = make_pair(tmp, i);
    }

    sort(vp.begin(), vp.end(), compare);

    for(int i=0;i<n;i++){
        ans[vp[i].second] = i;
    }
    for(int i=0;i<n;i++){
        cout<<ans[i]<<" ";
    }
}