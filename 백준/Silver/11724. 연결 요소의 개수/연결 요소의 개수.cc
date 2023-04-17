#include <iostream>
#include <vector>
using namespace std;

vector<vector<int>> list;
vector<bool> visited;

void DFS(int v){
    if(visited[v]) return;

    visited[v]=true;

    for(auto i:list[v]){
        if(!visited[i]) DFS(i);
    }
}

int main(){
    ios_base::sync_with_stdio(false); cout.tie(NULL); cin.tie(NULL);

    int n, m; cin>>n>>m;
    visited=vector<bool>(n+1, false);
    list.resize(n+1);

    for(int i=1;i<=m;i++){
        int u, v;
        cin>>u>>v;

        list[u].push_back(v);
        list[v].push_back(u);
    }

    int cnt=0;
    for(int i=1;i<=n;i++){
        if(!visited[i]){
            cnt++;
            DFS(i);
        }
    }
    cout<<cnt;
}