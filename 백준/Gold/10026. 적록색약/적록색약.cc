#include <iostream>
#include <vector>
using namespace std;

int n;
vector<vector<char>> grid;
vector<vector<bool>> visited;
int moved[4][2]={{-1, 0}, {0, 1}, {1, 0}, {0, -1}};

void dfs(int x, int y){
    for(int i=0;i<4;i++){
        int newX=x+moved[i][0];
        int newY=y+moved[i][1];

        if(newX>=0 && newX<n && newY>=0 && newY<n){
            if(grid[newX][newY]==grid[x][y] && visited[newX][newY]==false){
                visited[newX][newY]=true;
                dfs(newX, newY);
            }
        }
    }
}

int main(){
    ios_base::sync_with_stdio(false); cout.tie(NULL); cin.tie(NULL);

    cin>>n;
    vector<vector<bool>> v1(n, vector<bool>(n, false));
    visited=v1;

    grid.resize(n);
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            char c=cin.get();
            if(c=='\n') c=cin.get();

            grid[i].push_back(c);
        }
    }

    int cnt=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(!visited[i][j]){
                visited[i][j]=true;
                dfs(i, j);
                ++cnt;
            }
        }
    }
    cout<<cnt<<' ';
    
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(grid[i][j]=='G'){
                grid[i][j]='R';
            }
        }
    }

    vector<vector<bool>> v2(n, vector<bool>(n, false));
    visited=v2;

    cnt=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(!visited[i][j]){
                visited[i][j]=true;
                dfs(i, j);
                ++cnt;
            }
        }
    }
    cout<<cnt;
}