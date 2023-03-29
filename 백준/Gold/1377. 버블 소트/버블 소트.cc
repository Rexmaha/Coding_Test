#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
typedef pair<int, int> p;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int n; cin>>n;
    vector<p> v(n);

    for(int i=0;i<n;i++){
        cin>>v[i].first;
        v[i].second=i;
    }

    sort(v.begin(), v.end());

    int res=0;
    for(int i=0;i<n;i++){
        if(res<v[i].second-i){
            res=v[i].second-i;
        }
    }
    cout<<res+1;
}