#include <iostream>
#include <string>
#include <sstream>
#include <map>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int t; cin>>t;
    string s, token;
    map<string, int> mp;
    for(int i=0;i<t;i++){
        cin>>s;
        stringstream ss(s);

        bool found=false;
        while(getline(ss, token, '.')){
            if(!found) found=true;
            else{
                if(mp.find(token)!=mp.end()){
                    ++mp[token];
                }
                else{
                    mp.insert({token, 1});
                }
            }
        }
    }

    for(auto iter:mp){
        cout<<iter.first<<" "<<iter.second<<'\n';
    }
}