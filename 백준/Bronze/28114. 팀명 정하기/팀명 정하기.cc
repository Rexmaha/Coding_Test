#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <utility>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    vector<int> year(3);
    vector<pair<int, string>> vp(3);

    int n, y; string name;
    for(int i=0;i<3;i++){
        cin>>n>>y>>name;
        year[i]=y;
        vp[i]=make_pair(n, name);
    }

    sort(year.begin(), year.end());
    sort(vp.begin(), vp.end(), greater<>());

    string yres="";
    string nres="";

    for(int i=0;i<3;i++){
        yres+=to_string(year[i]%100);
        nres+=vp[i].second[0];
    }
    cout<<yres<<'\n'<<nres;
}