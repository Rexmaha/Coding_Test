#include <iostream>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cout.tie(NULL); cin.tie(NULL);

    int sum=0, i;
    int ary[10];
    for(i=0;i<10;i++){
        cin>>ary[i];
        sum+=ary[i];
        if(sum>=100) break;
    }
    if(100-(sum-ary[i])<sum-100) cout<<sum-ary[i];
    else cout<<sum;
}