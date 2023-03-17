#include <iostream>
#include <string>
#include <sstream>
#include <vector>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cout.tie(NULL); cin.tie(NULL);

    string s, token; cin>>s;
    stringstream ss(s);
    vector<int> kda;

    while(getline(ss, token, '/')){
        kda.push_back(stoi(token));
    }

    if(kda[0]+kda[2]<kda[1] || kda[1]==0) cout<<"hasu";
    else cout<<"gosu";
}