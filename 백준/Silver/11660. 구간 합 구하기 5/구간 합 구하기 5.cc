#include <iostream>
using namespace std;
typedef long long ll;

int n, m;
ll s[1025][1025];

int main(){
    ios_base::sync_with_stdio(false); cout.tie(NULL); cin.tie(NULL);

    cin>>n>>m;

    int tmp;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cin>>tmp;
            s[i][j]=s[i][j-1]+s[i-1][j]-s[i-1][j-1]+tmp;
        }
    }

    int x1, y1, x2, y2;
    while(m--){
        cin>>x1>>y1>>x2>>y2;
        cout<<s[x2][y2]-s[x1-1][y2]-s[x2][y1-1]+s[x1-1][y1-1]<<'\n';
    }
}