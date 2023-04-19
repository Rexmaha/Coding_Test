#include <iostream>
#include <string>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int n, d; cin>>n>>d;
    string s;
    int res=0;
    for(int i=1;i<=n;i++){
        s=to_string(i);

        for(int j=0;j<s.length();j++){
            if(s[j]==(d+'0')) ++res;
        }
    }
    cout<<res;
}