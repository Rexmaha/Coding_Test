#include <bits/stdc++.h>
using namespace std;
set<pair<string, string>> s;
vector<string> vs(4);

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    for(int i=0; i<4; i++) cin>>vs[i];
    for(int i=0; i<4; i++) {
        for(int j=0; j<4; j++){
            s.insert(make_pair(vs[i], vs[j]));
        }
    }
    for(auto iter = s.begin(); iter != s.end(); iter++){
        cout<<(*iter).first<<' '<<(*iter).second<<'\n';
    }
}