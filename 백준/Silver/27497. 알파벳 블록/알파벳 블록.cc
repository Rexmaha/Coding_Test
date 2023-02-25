#include <iostream>
#include <queue>
#include <string>
#include <stack>
#include <algorithm>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cout.tie(NULL); cin.tie(NULL);

    deque<char> dq;
    stack<int> rem;
    int n; cin>>n;
    while(n--){
        int a; char c;
        cin>>a;

        if(a==3 && !dq.empty() && !rem.empty()){
            if(rem.top()==1) dq.pop_back();
            else if(rem.top()==2) dq.pop_front();

            rem.pop();
        }
        else if(a==2){
            cin>>c;
            dq.push_front(c);
            rem.push(a);
        }
        else if(a==1){
            cin>>c;
            dq.push_back(c);
            rem.push(a);
        }
    }

    string res="";
    while(!dq.empty()){
        res+=dq.front();
        dq.pop_front();
    }
    if(res=="") cout<<"0";
    else cout<<res;
}