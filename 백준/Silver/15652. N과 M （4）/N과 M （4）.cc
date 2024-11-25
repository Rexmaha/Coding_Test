#include <bits/stdc++.h>
using namespace std;

#define FASTIO ios_base::sync_with_stdio(false); cout.tie(NULL); cin.tie(NULL);

int n, m;
vector<int> v;
vector<bool> visited;

void backtracking(int cnt){
    if(cnt == m){
        for(int i=0;i<v.size();i++){
            cout<<v[i]<<' ';
        }
        cout<<'\n';
        return;
    }
    else{
        for(int i=1;i<=n;i++){
            if(v.empty() || v[v.size() - 1] <= i){
                visited[i] = true;
                v.push_back(i);
                backtracking(cnt + 1);
                visited[i] = false;
                v.pop_back();
            }
        }
    }
}

int main(){
    FASTIO;

    cin>>n>>m;
    visited = vector<bool>(n+1, false);

    backtracking(0);
}