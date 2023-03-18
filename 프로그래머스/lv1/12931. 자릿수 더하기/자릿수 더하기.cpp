#include <iostream>
#include <string>

using namespace std;
int solution(int n)
{
    string s=to_string(n);
    int res=0;
    for(int i=0;i<s.length();i++){
        res+=(s[i]-'0');
    }
    return res;
}