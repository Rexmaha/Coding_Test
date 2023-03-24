#include <string>
#include <vector>

using namespace std;

string solution(vector<string> seoul) {
    string res="김서방은 ";
    
    for(int i=0;i<seoul.size();i++){
        if(seoul[i]=="Kim") res+=to_string(i);
    }
    
    res+="에 있다";
    return res;
}