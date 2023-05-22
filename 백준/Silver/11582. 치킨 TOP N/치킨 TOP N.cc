#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int n, k;
vector<int> v;

void print(){
    for(int i=0;i<n;i++)
        cout<<v[i]<<' ';
}

void dq(int num){
    if(num==k){
        print();
        return;
    }

    for(int i=0;i<n;i+=n/(num/2)){
        sort(v.begin()+i, v.begin()+i+(n/(num/2)));
    }
    
    dq(num/2);
}

int main(){
    ios_base::sync_with_stdio(false); cout.tie(NULL); cin.tie(NULL);

    cin>>n;
    v.resize(n);
    for(int i=0;i<n;i++) cin>>v[i];
    cin>>k;

    dq(n);
}