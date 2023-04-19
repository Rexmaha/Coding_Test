#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
string s;
char mod;
int m, n;

void getJari(){
    mod=m%n;

    if(mod>=10) mod+=55;
    else mod+=48;
    s+=mod;
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    cin>>m>>n;
    s="";

    while(m/n!=0){
        getJari();
        m/=n;
    }
    getJari();

    reverse(s.begin(), s.end());
    cout<<s;
}