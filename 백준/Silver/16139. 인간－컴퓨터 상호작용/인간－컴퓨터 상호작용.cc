#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cout.tie(NULL); cin.tie(NULL);

    string s; int q; cin>>s>>q;
    vector<vector<int>> v(26, vector<int>(s.length(), 0));
    ++v[s[0]-'a'][0];

    for(int i=1;i<s.length();i++){
        for(int j=0;j<26;j++)
            v[j][i]=v[j][i-1];
        ++v[s[i]-'a'][i];
    }

    while(q--){
        char c; int i, j;
        cin>>c>>i>>j;
        if(i==0) cout<<v[c-'a'][j]<<'\n';
        else cout<<v[c-'a'][j]-v[c-'a'][i-1]<<'\n';
    }
}