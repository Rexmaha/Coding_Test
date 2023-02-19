#include <iostream>
#include <string>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cout.tie(NULL); cin.tie(NULL);

    string s; cin>>s;

    for(int i=0;i<s.length();i++) s[i]-=32;
    cout<<s;
}