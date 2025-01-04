#include <bits/stdc++.h>
#define FASTIO cin.tie(NULL); cout.tie(NULL); ios_base::sync_with_stdio(false);
using namespace std;

bool isNumber(string s){
    for(char c:s){
        if(!isdigit(c)) return false;
    }
    return !s.empty();
}

int main(){
    FASTIO

    int idx, num;
    string str;
    for(int i=0;i<3;i++){
        cin>>str;

        if(isNumber(str)){
            idx = i+1;
            num = stoi(str);
        }
    }

    int resInteger = num+4-idx;

    if(resInteger%3 == 0){
        if(resInteger%5 == 0) cout<<"FizzBuzz";
        else cout<<"Fizz";
    }
    else{
        if(resInteger%5==0) cout<<"Buzz";
        else cout<<resInteger;
    }
}