#include <bits/stdc++.h>
using namespace std;

#define FASTIO ios_base::sync_with_stdio(false); cout.tie(NULL); cin.tie(NULL);

int n, m;
vector<int> ans;
vector<int> v;
vector<bool> visited;

void backtracking(int cnt){
    if(cnt == m){
        for(int i=0;i<ans.size();i++){
            cout<<ans[i]<<' ';
        }
        cout<<'\n';
        return;
    }
    else{
        for(int i=1;i<=n;i++){
            visited[i] = true;
            ans.push_back(v[i-1]);
            backtracking(cnt + 1);
            visited[i] = false;
            ans.pop_back();
        }
    }
}

int main(){
    FASTIO;

    cin>>n>>m;
    for(int i=0;i<n;i++){
        int tmp; cin>>tmp;
        v.push_back(tmp);
    }
    sort(v.begin(), v.end());
    visited = vector<bool>(n+1, false);

    backtracking(0);
}