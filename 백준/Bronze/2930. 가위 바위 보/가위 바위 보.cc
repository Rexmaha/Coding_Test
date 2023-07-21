#include <bits/stdc++.h>
using namespace std;
int r, n, sc, preSc;
string sg;
vector<string> otherV;

int score(char a, char b){
    if((a=='S'&&b=='S') || (a=='P'&&b=='P') || (a=='R'&&b=='R')) return 1;
    else if((a=='S'&&b=='R') || (a=='R'&&b=='P') || (a=='P'&&b=='S')) return 0;
    else return 2;
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    cin>>r>>sg>>n;

    for(int i=0;i<n;i++){
        string other; cin>>other;

        for(int j=0;j<other.size();j++){
            sc+=score(sg[j], other[j]);
        }

        otherV.push_back(other);
    }

    for(int i=0;i<r;i++){
        int ssc=0, rsc=0, psc=0;

        for(int j=0;j<n;j++){
            ssc+=score('S', otherV[j][i]);
            rsc+=score('R', otherV[j][i]);
            psc+=score('P', otherV[j][i]);
        }

        preSc+=max({ssc, rsc, psc});
    }

    cout<<sc<<'\n'<<preSc;
}