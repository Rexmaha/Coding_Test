#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int n, k;
vector<vector<int>> rain;
vector<vector<bool>> visited;
int moved[4][2]={{-1, 0}, {0, 1}, {1, 0}, {0, -1}};

void dfs(int x, int y){
    for(int i=0;i<4;i++){
        int newX=x+moved[i][0];
        int newY=y+moved[i][1];

        if(newX>=0 && newX<n && newY>=0 && newY<n){
            if(rain[newX][newY]>=k && visited[newX][newY]==false){
                visited[newX][newY]=true;
                //cout<<"newX = "<<newX<<", newY = "<<newY<<endl;
                dfs(newX, newY);
            }
        }
    }
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    cin>>n;

    int maxi=-1;
    rain.resize(n);
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            int tmp; cin>>tmp;
            if(maxi<tmp) maxi=tmp;
            rain[i].push_back(tmp);
        }
    }

    vector<int> res;
    for(k=0;k<=maxi;k++){
        int cnt=0;
        vector<vector<bool>> v1(n, vector<bool>(n, false));
        visited=v1;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(!visited[i][j] && rain[i][j]>=k){
                    //cout<<"i = "<<i<<", j = "<<j<<endl;
                    visited[i][j]=true;
                    dfs(i, j);
                    ++cnt;
                }
            }
        }
        res.push_back(cnt);
    }
    cout<<*max_element(res.begin(), res.end());
}