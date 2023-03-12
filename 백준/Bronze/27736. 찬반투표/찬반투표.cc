#include <iostream>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int n, num;
    int ap=0, re=0, gi=0;

    cin>>n;
    for(int i=0;i<n;i++){
        cin>>num;

        if(num==0) ++gi;
        else if(num==-1) ++re;
        else ++ap;
    }
    
    if(n%2==0 && gi>=n/2) cout<<"INVALID";
    else if(n%2!=0 && gi>=(n/2+1)) cout<<"INVALID";
    else if(ap>re) cout<<"APPROVED";
    else cout<<"REJECTED";
}