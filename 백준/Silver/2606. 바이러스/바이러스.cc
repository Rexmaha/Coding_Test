#include <iostream>
#include <vector>
using namespace std;

vector<vector<int>> list;
vector<bool> visited;

void dfs(int v){
    if(visited[v]) return;

    visited[v]=true;

    for(int i:list[v]){
        if(!visited[i]) dfs(i);
    }
}

int main(){
    ios_base::sync_with_stdio(false); cout.tie(NULL); cin.tie(NULL);

    int com, e; cin>>com>>e;
    visited=vector<bool>(com+1, false);
    list.resize(com+1);

    for(int i=1;i<=e;i++){
        int a, b; cin>>a>>b;

        list[a].push_back(b);
        list[b].push_back(a);
    }

    dfs(1);

    int res=0;
    for(int i=2;i<=com;i++){
        if(visited[i]) ++res;
    }
    cout<<res;
}