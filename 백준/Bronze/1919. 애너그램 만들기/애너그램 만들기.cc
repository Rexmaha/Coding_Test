#include <bits/stdc++.h>
using namespace std;

#define FASTIO ios_base::sync_with_stdio(false); cout.tie(NULL); cin.tie(NULL);

int main(){
    FASTIO;

    vector<int> first(26, 0);
    vector<int> second(26, 0);

    string f, s; cin>>f>>s;

    for(int i=0;i<f.size();i++){
        first[f[i]-'a']++;
    }
    for(int i=0;i<s.size();i++){
        second[s[i]-'a']++;
    }

    int ans = 0;
    for(int i=0;i<26;i++){
        ans+=abs(first[i] - second[i]);
    }

    cout<<ans;
}