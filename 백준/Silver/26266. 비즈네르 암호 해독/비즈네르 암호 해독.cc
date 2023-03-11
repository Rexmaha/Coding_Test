#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cout.tie(NULL); cin.tie(NULL);

    string plain, cipher, key="";
    cin>>plain>>cipher;
    
    vector<int> v;
    for(int i=0;i<cipher.size();i++){
        v.push_back(cipher[i]-'A'+27);
        v[i]-=plain[i]-'A'+1;

        if(v[i]>26) v[i]-=26;
        key+=(char)(v[i]+'A'-1);
    }

    int len=key.size();
    for(int i=1;i<=len/2+1;i++){
        if(len%i!=0) continue;

        string tmp=key.substr(0, i);
        int div=len/i;

        string res="";
        for(int j=0;j<div;j++){
            res+=tmp;
        }
        if(res==key){
            cout<<tmp;
            return 0;
        }
    }
    cout<<key;
}