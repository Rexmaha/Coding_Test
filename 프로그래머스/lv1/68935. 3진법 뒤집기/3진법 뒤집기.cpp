#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

string get_base3(int n){
    string s="";
    while(n!=0){
        if(n%3==0) s+='0';
        else if(n%3==1) s+='1';
        else s+='2';
        
        n/=3;
    }
    return s;
}

int get_int(string s){
    int res=0;
    for(int i=0;i<s.length();i++){
        res+=(s[i]-'0')*pow(3, s.length()-i-1);
    }
    return res;
}

int solution(int n) {
    string s=get_base3(n);
    return get_int(s);
}