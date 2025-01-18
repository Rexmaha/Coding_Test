#include <bits/stdc++.h>
#define FASTIO cin.tie(NULL); cout.tie(NULL); ios_base::sync_with_stdio(false);
using namespace std;

int main(){
    FASTIO

    string s; cin>>s;
    vector<int> alphabet(26, 0);

    for(char c:s){
        alphabet[c - 'A']++;
    }

    int odd = 0;
    char oddChar = '\0';
    for(int i=0;i<26;i++){
        if(alphabet[i] % 2 != 0) {
            odd++;
            oddChar = i + 'A';
        }
    }

    if((s.length() % 2 == 0 && odd != 0) || (s.length() % 2 != 0 && odd > 1)) {
        cout<<"I'm Sorry Hansoo";
        return 0;
    }

    string half = "";
    for(int i = 0;i<26;i++){
        half += string(alphabet[i] / 2, i+'A');
    }

    string palindrome = half;
    if(oddChar != '\0'){
        palindrome += oddChar;
    }

    reverse(half.begin(), half.end());
    palindrome+=half;

    cout<<palindrome;
}