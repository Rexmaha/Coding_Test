#include <iostream>
#include <vector>
#include <string>
#define MAX 1000000007
using namespace std;
typedef long long ull;
vector<ull> sqv;

void set(){
    sqv=vector<ull>(100001, 1);
    for(int i=1;i<=100000;i++){
        sqv[i]=(sqv[i-1]*2) % MAX;
    }
}

int main(){
    ios_base::sync_with_stdio(false); cout.tie(NULL); cin.tie(NULL);

    string s; cin>>s;
    vector<int> o;
    set();

    for(int i=0;i<s.length();i++){
        if(s[i]=='O') o.push_back(i);
    }

    ull res=0;
    if(o.empty()) cout<<0;
    else{
        for(int i=0;i<o.size();i++){
            res=(res+sqv[o[i]]) % MAX;
        }
        cout<<res;
    }
}  