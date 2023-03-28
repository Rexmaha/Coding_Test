#include <iostream>
#include <deque>
using namespace std;
typedef pair<int, int> p;

deque<p> dq;

int main(){
    ios_base::sync_with_stdio(false); cout.tie(NULL); cin.tie(NULL);
    int n, l; cin>>n>>l;

    for(int i=0;i<n;i++){
        int num; cin>>num;

        while(!dq.empty() && dq.back().second>num) dq.pop_back();

        dq.push_back(p(i+1, num));

        if(i+1-dq.front().first>=l) dq.pop_front();
        
        cout<<dq.front().second<<' ';
    }
}