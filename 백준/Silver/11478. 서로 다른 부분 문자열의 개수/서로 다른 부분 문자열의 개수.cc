#include <iostream>
#include <string>
#include <map>
using namespace std;
map<string, int> mp;
int res;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    string s; cin>>s;
    int len=s.length();

    for(int i=1;i<=len;i++){
        for(int j=0;j<=len-i;j++){
            string tmp=s.substr(j, i);
            mp[tmp];
        }
    }

    cout<<mp.size();
}