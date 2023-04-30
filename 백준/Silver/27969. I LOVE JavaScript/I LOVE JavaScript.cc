#include <iostream>
#include <string>
using namespace std;
typedef unsigned long long ull;

int main(){
    ios_base::sync_with_stdio(false); cout.tie(NULL); cin.tie(NULL);

    string ason; getline(cin, ason);
    ull res=0;
    for(int i=0;i<ason.length();i++){
        if(ason[i]=='[') {
            res+=8;
        }
        else if(ason[i]>='0' && ason[i]<='9'){
            do{
                ++i;
            }while(ason[i]>='0' && ason[i]<='9');
            res+=8;
        }
        else if((ason[i]>='a' && ason[i]<='z') || (ason[i]>='A' && ason[i]<='Z')){
            string tmp="";
            do{
                tmp+=ason[i];
                ++i;
            }while((ason[i]>='a' && ason[i]<='z') || (ason[i]>='A' && ason[i]<='Z'));
            res+=tmp.length()+12;
        }
    }
    cout<<res;
}