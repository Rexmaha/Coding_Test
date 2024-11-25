#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin>>n;

    for(int i=1;i<=n;i++){
        string s = to_string(i);

        int cnt = 0;
        for(int j=0;j<s.size();j++){
            if(s[j] == '3' || s[j] == '6' || s[j] == '9'){
                cnt++;
            }
        }

        if(cnt == 0){
            cout<<s<<" ";
        }
        else{
            for(int i=0;i<cnt;i++){
                cout<<'-';
            }
            cout<<" ";
        }
    }
}