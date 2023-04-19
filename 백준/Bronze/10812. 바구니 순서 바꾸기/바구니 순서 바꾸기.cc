#include <iostream>
#include <vector>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cout.tie(NULL); cin.tie(NULL);

    int n, m; cin>>n>>m;
    vector<int> v(n+1, 0);
    
    for(int i=1;i<=n;i++) v[i]=i;

    while(m--){
        int begin, end, mid; cin>>begin>>end>>mid;

        vector<int> front {&v[mid], &v[end+1]};
        vector<int> back {&v[begin], &v[mid]};

        for(int i=0;i<front.size();i++){
            v[begin+i]=front[i];
        }
        for(int i=0;i<back.size();i++){
            v[end-mid+1+begin+i]=back[i];
        }
    }
    
    for(int i=1;i<=n;i++) cout<<v[i]<<" ";
}