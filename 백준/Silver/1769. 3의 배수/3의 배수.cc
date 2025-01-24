#include <bits/stdc++.h>
#define FASTIO cin.tie(NULL); cout.tie(NULL); ios_base::sync_with_stdio(false);
using namespace std;

int main(){
    FASTIO

    string x; cin>>x;
    string check = x;

    int ans = 0;
    while(check.size() != 1){
        int sum = 0;
        for(int i = 0;i<check.size();i++){
            sum+=(check[i] - '0');
        }
        check = to_string(sum);

        ans++;
    }

    cout<<ans<<'\n';
    if(stoi(check)%3 == 0){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
}