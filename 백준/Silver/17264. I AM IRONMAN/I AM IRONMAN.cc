#include <bits/stdc++.h>
using namespace std;

#define FASTIO ios_base::sync_with_stdio(false); cout.tie(NULL); cin.tie(NULL);
map<string, bool> score;

int main(){
    FASTIO;

    int n, p; cin>>n>>p;
    int w, l, g; cin>>w>>l>>g;
    string name, win;

    while(p--){
        cin>>name>>win;

        if(win == "W"){
            score.insert({name, true});
        }
        else{
            score.insert({name, false});
        }
    }    

    int point = 0;
    while(n--){
        if(point >= g) {
            cout<<"I AM NOT IRONMAN!!";
            return 0;
        }
    
        cin>>name;
        const bool doWin = score[name];

        if(score.find(name) != score.end() && doWin == true) {
            point += w;
        }
        else{
            point -= l;

            if(point < 0) point = 0;
        }

    }
    cout<<"I AM IRONMAN!!";
}