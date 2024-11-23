#include <bits/stdc++.h>
using namespace std;

#define FASTIO ios_base::sync_with_stdio(false); cout.tie(NULL); cin.tie(NULL);

void Solve(string inst){
    int textSize = inst.size();
    list<char> l = {};
    list<char>::iterator cur = l.begin();

    for(int i=0;i<textSize;i++){
        char c = inst[i];

        if(c == '<'){
            if(cur != l.begin()){
                cur--;
            }
        }
        else if(c == '>'){
            if(cur != l.end()) {
                cur++;
            }
        }
        else if(c == '-'){
            if(cur != l.begin()) {
                cur = l.erase(--cur);
            }
        }
        else{
            cur = l.insert(cur, c);
            cur++;
        }
    }

    for(auto iter = l.begin(); iter != l.end(); iter++){
        cout<<*iter;
    }
    cout<<'\n';
}

int main(){
    FASTIO;

    int testCase; cin>>testCase;

    while(testCase--){
        string inst; cin>>inst;
        Solve(inst);
    }
}