#include <iostream>
using namespace std;
int paper[100][100];
int cnt;

int main(){
    ios_base::sync_with_stdio(false); cout.tie(NULL); cin.tie(NULL);

    int n; cin>>n;

    while(n--){
        int x, y; cin>>x>>y;
        for(int i=y;i<y+10;i++){
            for(int j=x;j<x+10;j++){
                if(paper[j][i]==0){
                    ++cnt;
                    paper[j][i]=1;
                }
            }
        }
    }
    cout<<cnt;
}