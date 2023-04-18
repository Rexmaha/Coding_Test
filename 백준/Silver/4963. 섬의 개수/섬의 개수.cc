#include <iostream>
#include <vector>
using namespace std;

int w, h;
vector<vector<int>> list;
vector<vector<bool>> visited;
int moved[8][2]={{-1, 0}, {0, 1}, {1, 0}, {0, -1}, {-1, 1}, {1, 1}, {-1, -1}, {1, -1}};

void dfs(int x, int y){
    for(int i=0;i<8;i++){
        int moveX=x+moved[i][0];
        int moveY=y+moved[i][1];

        if(moveX>=0 && moveX<h && moveY>=0 && moveY<w){
            if(list[moveX][moveY]==1 && visited[moveX][moveY]==false){
                visited[moveX][moveY]=true;
                dfs(moveX, moveY);
            }
        }
    }
}

int main(){
    ios_base::sync_with_stdio(false); cout.tie(NULL); cin.tie(NULL);

    while(1){
        cin>>w>>h;

        if(w==0 && h==0) break;
        vector<vector<int>> v1(h, vector<int>(w));
        list=v1;
        vector<vector<bool>> v2(h, vector<bool>(w, false));
        visited=v2;

        for(int i=0;i<h;i++){
            for(int j=0;j<w;j++){
                cin>>list[i][j];
            }
        }
        
        int cnt=0;
        for(int i=0;i<h;i++){
            for(int j=0;j<w;j++){
                if(list[i][j]==1 && visited[i][j]==false){
                    visited[i][j]=true;
                    dfs(i, j);
                    ++cnt;
                }
            }
        }
        cout<<cnt<<'\n';
    }
}