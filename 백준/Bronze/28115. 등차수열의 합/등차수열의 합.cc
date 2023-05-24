#include <iostream>
#include <vector>
using namespace std;
typedef long long ll;
int n;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    cin>>n;
    vector<ll> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    bool flag=true;
    for(int i=0;i<n-2;i++){
        if(v[i+1]-v[i] != v[i+2]-v[i+1]) flag=false;
    }
    
    if(!flag){
        cout<<"NO";
    }
    else{
        cout<<"YES\n";
        for(auto i:v) cout<<i<<" ";
        cout<<"\n";
        for(int i=0;i<n;i++) cout<<0<<" ";
    }
}