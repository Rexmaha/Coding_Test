#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string getBinary(int a, int n){
    string s="";
    while(a!=0){
        if(a%2==0){
            s+=" ";
        }
        else s+="#";
        
        a/=2;
    }
    while(s.length()!=n){
        s+=" ";
    }
    reverse(s.begin(), s.end());
    return s;
}

vector<string> solution(int n, vector<int> arr1, vector<int> arr2) {
    vector<string> answer;
    for(int i=0;i<n;i++){
        int num1=arr1[i]; int num2=arr2[i];
        int tmp=(num1|num2);
        answer.push_back(getBinary(tmp, n));
    }
    return answer;
}