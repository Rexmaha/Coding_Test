#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cout.tie(NULL); cin.tie(NULL);

    int t;
    char c;
    string isRight;

    map<int, int> mp;
    int res = 0;
    int cnt = 0;

    while(1){
        cin>>t;
        if(t == -1) break;

        cin>>c>>isRight;

        int key = c-65;
        
        if(isRight == "right"){
            cnt++;
            if(mp.find(key) != mp.end()){
                res+=(mp.at(key)*20 + t);
            }
            else{
                res+=t;
            }
        }
        else if(isRight == "wrong"){
            if(mp.find(key) != mp.end()){
                mp.at(key) += 1;
            }
            else{
                mp.insert({key, 1});
            }
        }
    }
    cout<<cnt<<" "<<res;
}