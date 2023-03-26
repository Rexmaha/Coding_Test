#include <string>
#include <vector>

using namespace std;

string solution(int n) {
    string res="";
    for(int i=0;i<n/2;i++) res+="수박";
    
    if(n%2!=0) res+="수";
    
    return res;
}