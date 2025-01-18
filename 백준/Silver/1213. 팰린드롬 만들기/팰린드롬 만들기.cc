#include <bits/stdc++.h>
#define FASTIO cin.tie(NULL); cout.tie(NULL); ios_base::sync_with_stdio(false);
using namespace std;

int main(){
    FASTIO

    string s; cin>>s;
    vector<int> alphabet(26, 0);

    for(int i=0;i<s.length();i++){
        alphabet[s[i]-'A']++;
    }

    int odd = 0, even = 0;
    for(int i=0;i<26;i++){
        if(alphabet[i] % 2 == 0) even++;
        else odd++;
    }

    if((s.length() % 2 == 0 && odd != 0) || (s.length() % 2 != 0 && odd > 1)) {
        cout<<"I'm Sorry Hansoo";
        return 0;
    }

    string ans = "";
    if(s.length() % 2 == 0){
        for(int i=0;i<26;i++){
            if(alphabet[i] != 0){
                for(int j=0;j<alphabet[i] / 2;j++){
                    ans+=(char)(i + 'A');
                }
            }
        }
        string reversedString = ans;
        reverse(reversedString.begin(), reversedString.end());
        cout<<ans+reversedString;
    }
    else{
        char oddChar;
        for(int i=0;i<26;i++){
            if(alphabet[i] % 2 != 0){
                oddChar = (char)(i + 'A');
                for(int j=0;j<(alphabet[i] - 1) / 2;j++){
                    ans+=(char)(i + 'A');
                }
            }
            else if(alphabet[i] != 0){
                for(int j=0;j<alphabet[i] / 2;j++){
                    ans+=(char)(i + 'A');
                }
            }
        }
        ans += oddChar;
        string reversedString = ans.substr(0, ans.length() - 1);
        reverse(reversedString.begin(), reversedString.end());
        cout<<ans+reversedString;
    }
}