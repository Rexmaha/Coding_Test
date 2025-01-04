#include <bits/stdc++.h>
#define FASTIO cin.tie(NULL); cout.tie(NULL); ios_base::sync_with_stdio(false);
using namespace std;

int main(){
    FASTIO

    string a, b, c;
    cin>>a>>b>>c;

    cout<<stoi(a)+stoi(b)-stoi(c)<<'\n';
    cout<<stoi(a+b)-stoi(c);
}