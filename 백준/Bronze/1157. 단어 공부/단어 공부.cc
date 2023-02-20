#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
string alpha;
int cnt[26];

int main(){
    cin>>alpha;
    int alpha_len=alpha.length();

    for(int i=0; i<alpha_len; i++){
        alpha[i]=toupper(alpha[i]);
        cnt[(int)alpha[i]-65]++;
    }

    int max=0, recnt=0, target;
    for(int j=0; j<26; j++){
        if(max<cnt[j]){
            recnt=0;
            max=cnt[j];
            target=j;
        }
        if(max==cnt[j]) recnt++;
    }
    if(recnt>1) cout<<"?";
    else cout<<(char)(target+65);
}