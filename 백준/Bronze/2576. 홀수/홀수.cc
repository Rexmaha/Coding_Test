#include <bits/stdc++.h>
using namespace std;
vector<int> v;

int main(){
    ios_base::sync_with_stdio(false); cout.tie(NULL); cin.tie(NULL);

    int tmp, sum=0, min=101;
    for(int i=0;i<7;i++){
        cin>>tmp;
        if(tmp%2!=0) {
            sum+=tmp;
            
            if(min>tmp) min=tmp;
        }
    }
    if(sum==0) cout<<"-1";
    else cout<<sum<<"\n"<<min;
}