#include <bits/stdc++.h>
#define FASTIO cin.tie(NULL); cout.tie(NULL); ios_base::sync_with_stdio(false);
using namespace std;

int main(){
    FASTIO

    string num; cin>>num;
    vector<int> numSet(9, 0);

    for(int i=0;i<num.size();i++){
        int ctoi = num[i]-'0';

        if(ctoi == 9){
            numSet[6]++;
        }
        else{
            numSet[ctoi]++;
        }
    }
    numSet[6] = numSet[6]/2 + numSet[6]%2;

    cout<<*max_element(numSet.begin(), numSet.end());
}