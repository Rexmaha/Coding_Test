#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;

int testCase;
int n;

int main(){
    ios_base::sync_with_stdio(false); cout.tie(NULL); cin.tie(NULL);
    
    cin>>testCase;

    for(int i=0;i<testCase;i++){
        cin>>n;
        
        string name, type;
        map<string, int> mp;

        for(int j=0;j<n;j++){
            cin>>name>>type;

            if(mp.find(type) != mp.end()){
                mp[type]++;
            }
            else{
                mp.insert({type, 1});
            }
        }

        ull res = 1;

        for(auto type:mp){
            res*=(type.second+1);
        }

        cout<<res-1<<'\n';
    }
}