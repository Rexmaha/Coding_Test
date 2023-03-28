#include <iostream>
#include <queue>
#include <math.h>
using namespace std;

struct compare{
    bool operator()(int a, int b){
        int f=abs(a);
        int s=abs(b);

        if(f==s) return a>b;
        else return f>s;
    }
};

int main(){
    ios_base::sync_with_stdio(false); cout.tie(NULL); cin.tie(NULL);

    priority_queue<int, vector<int>, compare> pq;
    int n; cin>>n;

    for(int i=0;i<n;i++) {
        int num; cin>>num;

        if(num==0){
            if(pq.empty()) cout<<"0\n";
            else{
                cout<<pq.top()<<'\n';
                pq.pop();
            }
        }
        else{
            pq.push(num);
        }
    }
}