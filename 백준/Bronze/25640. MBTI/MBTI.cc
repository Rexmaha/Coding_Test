#include <iostream>
#include <string>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cout.tie(NULL); cin.tie(NULL);

    string mbti; cin>>mbti;
    int n; cin>>n;
    int cnt=0;
    while(n--){
        string tmp; cin>>tmp;
        if(tmp==mbti) ++cnt;
    }
    cout<<cnt;
}