#include <iostream>
#include <vector>
using namespace std;

void print(vector<int> v){
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<' ';
    }
}

int main(){
    ios_base::sync_with_stdio(false); cout.tie(NULL); cin.tie(NULL);

    int n, k; cin>>n>>k;
    vector<int> v(n);

    for(int i=0;i<n;i++) cin>>v[i];

    int res=0;
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(v[j]>v[j+1]){
                int tmp=v[j];
                v[j]=v[j+1];
                v[j+1]=tmp;
                ++res;
            }
            if(res==k){
                print(v);
                return 0;
            }
        }
    }

    cout<<-1;
}