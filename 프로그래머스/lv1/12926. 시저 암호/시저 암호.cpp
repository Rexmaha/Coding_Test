#include <string>
#include <vector>

using namespace std;

string solution(string s, int n) {
    for(int i=0;i<s.length();i++){
        char c=s[i];
        if(c>='a' && c<='z') {
            if(c+n>'z') s[i]-=(26-n);
            else s[i]+=n;
        }
        else if(c>='A' && c<='Z') {
            if(c+n>'Z') s[i]-=(26-n);
            else s[i]+=n;
        }
    }
    return s;
}