#include <iostream>
#include <vector>
using namespace std;
vector<vector<char>> v;
bool visited[26];
int r, c, res=-1;
int moved[4][2]={{-1, 0}, {0, 1}, {1, 0}, {0, -1}};

void dfs(int x, int y, int cnt){
    if(res < cnt) res=cnt;

    for(int i=0;i<4;i++){
        int moveX=x+moved[i][0];
        int moveY=y+moved[i][1];

        if(moveY>=0 && moveY<c && moveX>=0 && moveX<r){
            if(!visited[v[moveX][moveY]-'A']){
                visited[v[moveX][moveY]-'A']=true;
                dfs(moveX, moveY, cnt+1);
                visited[v[moveX][moveY]-'A']=false;
            }
        }
    }
}

int main(){
    ios_base::sync_with_stdio(false); cout.tie(NULL); cin.tie(NULL);
    cin>>r>>c; v.resize(r);

    for(int i=0;i<r;i++){
        string s; cin>>s;
        for(int j=0;j<c;j++){
            v[i].push_back(s[j]);
        }
    }

    visited[v[0][0]-'A']=true;
    dfs(0, 0, 1);
    cout<<res;
}