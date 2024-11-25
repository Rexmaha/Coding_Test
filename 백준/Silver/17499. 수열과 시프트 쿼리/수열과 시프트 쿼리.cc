#include <bits/stdc++.h>
using namespace std;

#define FASTIO ios_base::sync_with_stdio(false); cout.tie(NULL); cin.tie(NULL);

vector<int> v;

int main(){
    FASTIO;

    int n, q; cin>>n>>q;

    for(int i=0;i<n;i++){
        int tmp; cin>>tmp;
        v.push_back(tmp);
    }

    int startPoint = 0;
    while(q--){
        int inst; cin>>inst;

        if(inst == 1){
            int i, x; cin>>i>>x;
            v[(startPoint + (--i)) % n]+=x;
        }
        else if(inst == 2){
            int s; cin>>s;
            startPoint = (startPoint + n - s) % n;
        }
        else if(inst == 3){
            int s; cin>>s;
            startPoint = (startPoint + s) % n;
        }
    }
    
    for(int i=0;i<n;i++){
        cout<<v[(startPoint + i)%n]<<' ';
    }
}