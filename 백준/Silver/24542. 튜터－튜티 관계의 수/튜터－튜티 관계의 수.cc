#include <bits/stdc++.h>
using namespace std;

#define FASTIO ios_base::sync_with_stdio(false); cout.tie(NULL); cin.tie(NULL);
#define ll long long
#define REM 1000000007

vector<int> tree;
vector<int> sizeRec;

int findRoot(int a){
    if(a==tree[a]) return a;
    else return tree[a] = findRoot(tree[a]);
}

void mergeRoot(int a, int b){
    int firstRoot = findRoot(a);
    int secondRoot = findRoot(b);

    if(firstRoot != secondRoot){
        if(sizeRec[firstRoot] < sizeRec[secondRoot]) swap(firstRoot, secondRoot);

        tree[secondRoot] = firstRoot;
        sizeRec[firstRoot] += sizeRec[secondRoot];
    }
}

int main(){
    FASTIO;

    int n, m; cin>>n>>m;
    
    for(int i=0;i<n;i++){
        tree.push_back(i);
    }
    sizeRec.resize(n, 1);

    while(m--){
        int u, v; cin>>u>>v;
        mergeRoot(u-1, v-1);
    }

    ll res = 1;
    for(int i=0;i<n;i++){
        if(findRoot(i) == i){
            res = (res * sizeRec[i]) % REM;
        }
    }
    cout<<res;
}