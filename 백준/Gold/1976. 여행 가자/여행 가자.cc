#include <bits/stdc++.h>
using namespace std;

#define FASTIO ios_base::sync_with_stdio(false); cout.tie(NULL); cin.tie(NULL);

vector<int> tree;

int findRoot(int a){
    if(a==tree[a]) return a;
    else return tree[a] = findRoot(tree[a]);
}

void mergeTree(int a, int b){
    int firstRoot = findRoot(a);
    int secondRoot = findRoot(b);

    if(firstRoot != secondRoot){
        tree[secondRoot] = firstRoot;
    }
}

int main(){
    FASTIO;

    int n, m; cin>>n>>m;

    tree.resize(n);
    for(int i=0;i<n;i++){
        tree[i] = i;
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            int connect; cin>>connect;
            if(connect == 1 && i < j) {
                mergeTree(i, j);
            }
        }
    }

    unordered_map<int, bool> haveOnlyRoot;
    int travel;
    for(int i=0;i<m;i++){
        cin>>travel;
        haveOnlyRoot[findRoot(travel - 1)] = true;
    }

    if(haveOnlyRoot.size() == 1) cout<<"YES";
    else cout<<"NO";
}