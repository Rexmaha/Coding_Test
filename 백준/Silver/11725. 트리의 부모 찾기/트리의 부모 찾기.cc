#include <iostream>
#include <vector>
using namespace std;
int n;
vector<bool> visited;
vector<vector<int>> v;
vector<int> res;

void dfs(int num){
    visited[num]=true;

    for(int i=0;i<v[num].size();i++){
        int child=v[num][i];
        if(!visited[child]){
            res[child]=num;
            dfs(child);
        }
    }
}

int main(){
    ios_base::sync_with_stdio(false); cout.tie(NULL); cin.tie(NULL);

    cin>>n;
    v.resize(n+1); res=vector<int>(n+1); visited=vector<bool>(n+1, false);

    int v1, v2;
    for(int i=0;i<n;i++){
        cin>>v1>>v2;
        v[v1].push_back(v2);
        v[v2].push_back(v1);
    }

    dfs(1);
    for(int i=2;i<=n;i++) cout<<res[i]<<'\n';
}