#include <iostream>
#include <set>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int t; cin>>t;
    while(t--){
        multiset<int> ms;
        int q; cin>>q;
        while(q--){
            char c; int num; cin>>c>>num;
            if(c=='I') ms.insert(num);
            else if(c=='D' && !ms.empty()){
                if(num==1){
                    auto iter=ms.end();
                    --iter;
                    ms.erase(iter);
                }
                else if(num==-1){
                    ms.erase(ms.begin());
                }
            }
        }

        if(ms.empty()) cout<<"EMPTY"<<'\n';
        else{
            auto iter=ms.end();
            --iter;
            cout<<*iter<<" "<<*ms.begin()<<'\n';
        }
    }
}