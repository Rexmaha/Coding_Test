#include <iostream>
#include <vector>
using namespace std;

int n, m;
vector<vector<int>> list;
vector<bool> visited;
bool isFind;

void dfs(int s, int depth){
    if(depth==5){
        isFind=true;
        return;
    }

    visited[s]=true;

    for(auto i:list[s]){
        if(!visited[i]){
            dfs(i, depth+1);
        }
    }

    visited[s]=false;
}

int main(){
    ios_base::sync_with_stdio(false); cout.tie(NULL); cin.tie(NULL);
    cin>>n>>m;

    list.resize(n);
    visited=vector<bool>(n, false);
    isFind=false;

    for(int i=0;i<m;i++){
        int a, b; cin>>a>>b;
        list[a].push_back(b);
        list[b].push_back(a);
    }

    for(int i=0;i<n;i++){
        dfs(i, 1);
        if(isFind){
            cout<<1;
            return 0;
        }
    }
    cout<<0;
}