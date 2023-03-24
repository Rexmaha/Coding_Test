#include <string>
#include <vector>

using namespace std;

bool solution(string s) {
    bool char_find=false;
    for(int i=0;i<s.length();i++){
        if((s[i]>='a' && s[i]<='z') || (s[i]>='A' && s[i]<='Z')){
            char_find=true;
            break;
        }
    }
    
    if(!char_find && (s.length()==4 || s.length()==6)) return true;
    else return false;
}