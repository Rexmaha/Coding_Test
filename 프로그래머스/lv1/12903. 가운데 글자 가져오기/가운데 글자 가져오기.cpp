#include <string>
#include <vector>

using namespace std;

string solution(string s) {
    string res="";
    if(s.length()%2!=0) res+=s[s.length()/2];
    else res+=s.substr(s.length()/2-1, 2);
    return res;
}