#include <iostream>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cout.tie(NULL); cin.tie(NULL);

    int a, b, cur=0, max=-1;

    while(1){
        cin>>a>>b;

        if(b==0){
            cur-=a;
            break;
        }

        cur-=a;
        cur+=b;

        if(cur>=10000){
            max=10000;
            break;
        }
        if(max<cur) max=cur;
    }

    cout<<max;
}