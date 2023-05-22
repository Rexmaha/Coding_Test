#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;
int n, k;
vector<string> vs;

void case3(){
    for(int i=n-1;i>=0;i--){
        cout<<vs[i]<<'\n';
    }
}

void case2(){
    for(int i=0;i<n;i++){
        reverse(vs[i].begin(), vs[i].end());
        cout<<vs[i]<<'\n';
    }
}

void case1(){
    for(int i=0;i<n;i++){
        cout<<vs[i]<<'\n';
    }
}

int main(){
    ios_base::sync_with_stdio(false); cout.tie(NULL); cin.tie(NULL);

    cin>>n; vs.resize(n);
    for(int i=0;i<n;i++) cin>>vs[i];
    cin>>k;

    switch (k)
    {
    case 1:
        case1();
        break;
    case 2:
        case2();
        break;
    case 3:
        case3();
        break;
    }
}