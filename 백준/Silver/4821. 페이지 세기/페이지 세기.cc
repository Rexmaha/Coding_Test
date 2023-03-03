#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cout.tie(NULL); cin.tie(NULL);

    int page;
    while(1){
        bool print[1001]={false, };
        cin>>page;

        if(page==0) return 0; // page가 0이면 종료

        string range, comma_token, bar_token;
        cin>>range; // 문서 범위 입력받기
        stringstream com(range);
        while(getline(com, comma_token, ',')){
            stringstream bar(comma_token);

            bool isbar=true;
            int low, high;
            while(getline(bar, bar_token, '-')){
                if(isbar){
                    low=stoi(bar_token);
                    isbar=false;
                }
                else {
                    high=stoi(bar_token);
                    isbar=true;
                }
            }

            if(low>page) continue; // 작은 범위 페이지가 문서범위를 넘어가는 경우 break

            if(isbar && low<=high){ // bar ('-')가 있는 경우
                if(high>page) high=page;
                for(int i=low;i<=high;i++) print[i]=true;
            }
            else if(!isbar) // bar ('-')가 없는 경우
                print[low]=true;
        }

        int cnt=0;
        for(auto b:print){
            if(b) ++cnt;
        }
        cout<<cnt<<'\n';
    }
}