#include <bits/stdc++.h>
using namespace std;
vector<int> v;

int main(){
    ios_base::sync_with_stdio(false); cout.tie(NULL); cin.tie(NULL);

    int tmp;
    for(int i=0;i<7;i++){
        cin>>tmp;
        if(tmp%2!=0) v.push_back(tmp);
    }

    if(v.size()==0) cout<<"-1";
    else{
        int sum=0;
        for(int i=0;i<v.size();i++){
            sum+=v[i];
        }
        cout<<sum<<"\n"<<*min_element(v.begin(), v.end());
    }
}