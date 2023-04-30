#include <iostream>
#include <vector>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cout.tie(NULL); cin.tie(NULL);
    
    int n; cin>>n;
    vector<int> v(n);

    for(int i=0;i<n;i++) cin>>v[i];

    int res=0;
    for(int i=0;i<n-1;i++){
        if(v[i]<v[i+1]){
            int cur=v[i], len=v[i+1]-v[i], j;
            for(j=i+1;;j++){
                if(v[j]<v[j+1] && j!=n-1) {
                    len+=v[j+1]-v[j];
                }
                else break;
            }
            if(res<len) res=len;
            i=j;
        }
    }
    cout<<res;
}