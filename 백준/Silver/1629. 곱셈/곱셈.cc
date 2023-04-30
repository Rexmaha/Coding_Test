#include <iostream>
using namespace std;
typedef long long ll;
ll a, b, c, num;

ll dq(ll b){
    if(b==0) return 1;
    else if(b==1) return a%c;

    num=dq(b/2)%c;
    if(b%2==0) return num*num%c;
    else return num*num%c * a%c;
}

int main(){
    ios_base::sync_with_stdio(false); cout.tie(NULL); cin.tie(NULL);
    cin>>a>>b>>c;
    cout<<dq(b);
}