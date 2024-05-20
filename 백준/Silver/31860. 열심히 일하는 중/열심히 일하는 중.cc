#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, m, k;
    cin>>n>>m>>k;
    priority_queue<int> pq;
    
    int tmp;
    for (int i=0;i<n;i++){
        cin>>tmp;
        pq.push(tmp);
    }

    int yesterdaySatis = 0;
    vector<int> satis;
    while(true){
        if(pq.size() == 0){
            cout<<satis.size()<<'\n';
            for(auto v:satis){
                cout<<v<<'\n';
            }
            break;
        }
        int dailySatis = yesterdaySatis/2 + pq.top();
        satis.push_back(dailySatis);

        yesterdaySatis = dailySatis;

        int top = pq.top();
        top -= m;
        if(top<=k){
            pq.pop();
        }
        else{
            pq.pop();
            pq.push(top);
        }
    }
}   