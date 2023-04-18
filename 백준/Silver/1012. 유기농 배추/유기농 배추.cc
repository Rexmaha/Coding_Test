#include <iostream>
#include <vector>
using namespace std;

int moved[4][2]={{-1, 0}, {0, 1}, {1, 0}, {0, -1}};

int m, n, k;
int cnt;
vector<vector<int>> list;
vector<vector<bool>> visited;

void dfs(int x, int y){
    for(int i=0;i<4;i++){
        int moveX=x+moved[i][0];
        int moveY=y+moved[i][1];

        if(moveY>=0 && moveY<n && moveX>=0 && moveX<m){
            if(list[moveY][moveX]==1 && visited[moveY][moveX]==false){
                visited[moveY][moveX]=true;
                dfs(moveX, moveY);
            }
        }
    }
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int t; cin>>t;
    while(t--){
        cin>>m>>n>>k;
        vector<vector<int>> v1(n, vector<int>(m, 0));
        list=v1;
        vector<vector<bool>> v2(n, vector<bool>(m, false));
        visited=v2;

        while(k--){
            int x, y; cin>>x>>y;
            list[y][x]=1;
        }

        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(visited[i][j]==false && list[i][j]==1){
                    visited[i][j]=true;
                    dfs(j, i);
                    cnt++;
                }
            }
        }
        cout<<cnt<<'\n';
        cnt=0;
    }
}