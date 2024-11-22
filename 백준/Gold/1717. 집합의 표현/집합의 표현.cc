#include <bits/stdc++.h>
using namespace std;
vector<int> tree;

int findRoot(int a){
    if(a == tree[a]) return a;
    else return findRoot(tree[a]);
}

void mergeRoot(int a, int b){
    int frontRoot = findRoot(a);
    int secondRoot = findRoot(b);

    if (frontRoot != secondRoot) tree[secondRoot] = frontRoot;
}

void findRoot(int a, int b){
    int frontRoot = findRoot(a);
    int secondRoot = findRoot(b);

    if(frontRoot == secondRoot) cout<<"YES\n";
    else cout<<"NO\n";
}

int main(){
    ios_base::sync_with_stdio(false); cout.tie(NULL); cin.tie(NULL);

    int n, m; cin>>n>>m;
    for(int i=0;i<=n;i++){
        tree.push_back(i);
    }

    while(m--){
        int inst, a, b; cin>>inst>>a>>b;

        if (inst==0){
            mergeRoot(a, b);
        }
        else if(inst==1){
            findRoot(a, b);
        }
    }
}