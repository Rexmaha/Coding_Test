#include <iostream>
#include <math.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int n, i; cin>>n;

    int d=0, p=0;
    for(i=1;i<=n;i++){
        char c; cin>>c;
        if(c=='D') ++d;
        else if(c=='P') ++p;

        if(abs(d-p)==2) break;
    }
    cout<<d<<":"<<p;
}