#include <bits/stdc++.h>
using namespace std;
int n, m, k, cnt;
int moved[4][2]={{-1, 0}, {0, 1}, {1, 0}, {0, -1}};
bool mp[101][101];
bool visited[101][101];
vector<int> res;

void dfs(int x, int y){
    cnt++;
    for(int i=0;i<4;i++){
        int newX=x+moved[i][0];
        int newY=y+moved[i][1];

        if(newX>=0 && newX<m && newY>=0 && newY<n){
            if(!mp[newX][newY] && !visited[newX][newY]){
                visited[newX][newY]=true;
                dfs(newX, newY);
            }
        }
    }
}

int main(){
    ios_base::sync_with_stdio(false); cout.tie(NULL); cin.tie(NULL);

    cin>>n>>m>>k;

    while(k--){
        int x1, y1, x2, y2; cin>>x1>>y1>>x2>>y2;

        for(int i=x1;i<x2;i++){
            for(int j=y1;j<y2;j++){
                mp[i][j]=true;
            }
        }
    }

    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(!mp[i][j] && !visited[i][j]){
                cnt=0;
                visited[i][j]=true;
                dfs(i, j);
                res.push_back(cnt);
            }
        }
    }

    sort(res.begin(), res.end());
    cout<<res.size()<<'\n';
    for(int r:res){
        cout<<r<<' ';
    }
}