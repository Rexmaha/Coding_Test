#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int m, n; cin>>m>>n;
    string s="";
    char mod;

    while(m/n!=0){
        mod=m%n;

        if(mod>=10) mod+=55;
        else mod+=48;
        s+=mod;

        m/=n;
    }
    mod=m%n;

    if(mod>=10) mod+=55;
    else mod+=48;
    s+=mod;

    reverse(s.begin(), s.end());
    cout<<s;
}