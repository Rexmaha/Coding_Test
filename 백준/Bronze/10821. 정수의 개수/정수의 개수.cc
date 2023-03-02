#include <iostream>
#include <sstream>
#include <string>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cout.tie(NULL); cin.tie(NULL);

    int cnt=0;
    string s, token; cin>>s;
    stringstream ss(s);
    while(getline(ss, token, ',')) ++cnt;
    cout<<cnt;
}