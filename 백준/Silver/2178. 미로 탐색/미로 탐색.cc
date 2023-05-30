#include <iostream>
#include <vector>
#include <queue>
using namespace std;
int n, m;
vector<vector<int>> v;
vector<vector<bool>> visited;
int moved[4][2]={{-1, 0}, {0, 1}, {1, 0}, {0, -1}};

void bfs(int i, int j){
    queue<pair<int, int>> q;
    q.push(make_pair(i, j));

    while(!q.empty()){
        visited[i][j]=true;

        int x=q.front().first;
        int y=q.front().second;

        q.pop();

        for(int t=0;t<4;t++){
            int newX=x+moved[t][0];
            int newY=y+moved[t][1];

            if(newX>=0 && newY>=0 && newX<n && newY<m){
                if(v[newX][newY]!=0 && !visited[newX][newY]){
                    visited[newX][newY]=true;
                    v[newX][newY]=v[x][y]+1;
                    q.push(make_pair(newX, newY));
                }
            }
        }
    }
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    cin>>n>>m;
    v=vector<vector<int>>(n, vector<int>(m));
    visited=vector<vector<bool>>(n, vector<bool>(m, false));

    for(int i=0;i<n;i++){
        string s;
        cin>>s;

        for(int j=0;j<m;j++){
            v[i][j]=s[j]-'0';
        }
    }
    bfs(0,0);
    cout<<v[n-1][m-1];
}