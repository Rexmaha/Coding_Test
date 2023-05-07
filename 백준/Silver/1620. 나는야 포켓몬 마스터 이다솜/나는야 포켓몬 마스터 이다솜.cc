#include <iostream>
#include <map>
#include <string>
using namespace std;

map<string, string> sn;
map<string, string> ns;

int main(){
    ios_base::sync_with_stdio(false); cout.tie(NULL); cin.tie(NULL);

    int n, m; cin>>n>>m;
    string s;
    for(int i=1;i<=n;i++){
        cin>>s;
        sn.insert({s, to_string(i)});
        ns.insert({to_string(i), s});
    }
    while(m--){
        cin>>s;
        if(s[0]>='0' && s[0]<='9'){
            cout<<ns[s]<<'\n';
        }
        else{
            cout<<sn[s]<<'\n';
        }
    }
}