#include <iostream>
#include <string>
#include <vector>
using namespace std;

string s, tmp;
vector<string> vs;

int main(){
    ios_base::sync_with_stdio(false); cout.tie(NULL); cin.tie(NULL);

    getline(cin, s);
    for(int i=0;i<s.length();i++){
        if(s[i]==' ') continue;
        else if(s[i]=='<' || s[i]=='>' || s[i]=='(' || s[i]==')'){
            tmp+=s[i];
            vs.push_back(tmp);
            tmp="";
        }
        else if(s[i]=='&'){
            vs.push_back("&&");
            ++i;
        }
        else if(s[i]=='|'){
            vs.push_back("||");
            ++i;
        }
        else{
            int k=i;
            while(s[k]!=' ' && s[k]!='<' && s[k]!='>' && s[k]!='(' && s[k]!=')' && s[k]!='&' && s[k]!='|'){
                if(k>s.length()-1) break;
                tmp+=s[k];
                ++k;
            }
            vs.push_back(tmp);
            tmp="";
            i=--k;
        }
    }
    string res="";
    for(auto iter:vs){
        res+=(iter+" ");
    }
    res.erase(res.length()-1, 1);
    cout<<res;
}