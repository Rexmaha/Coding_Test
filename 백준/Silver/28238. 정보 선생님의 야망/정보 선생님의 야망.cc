#include <bits/stdc++.h>
using namespace std;
int n;
vector<int> ary(10);

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    cin>>n;

    for(int i=0;i<n;i++){
        vector<int> v(5);
        for(int j=0;j<5;j++){
            cin>>v[j];
        }

        if(v[0]==1 && v[1]==1) ary[0]++;
        if(v[0]==1 && v[2]==1) ary[1]++;
        if(v[0]==1 && v[3]==1) ary[2]++;
        if(v[0]==1 && v[4]==1) ary[3]++;
        if(v[1]==1 && v[2]==1) ary[4]++;
        if(v[1]==1 && v[3]==1) ary[5]++;
        if(v[1]==1 && v[4]==1) ary[6]++;
        if(v[2]==1 && v[3]==1) ary[7]++;
        if(v[2]==1 && v[4]==1) ary[8]++;
        if(v[3]==1 && v[4]==1) ary[9]++;
    }
    cout<<*max_element(ary.begin(), ary.end())<<'\n';
    int idx=max_element(ary.begin(), ary.end())-ary.begin();
    if(idx==0) cout<<"1 1 0 0 0";
    else if(idx==1) cout<<"1 0 1 0 0";
    else if(idx==2) cout<<"1 0 0 1 0";
    else if(idx==3) cout<<"1 0 0 0 1";
    else if(idx==4) cout<<"0 1 1 0 0";
    else if(idx==5) cout<<"0 1 0 1 0";
    else if(idx==6) cout<<"0 1 0 0 1";
    else if(idx==7) cout<<"0 0 1 1 0";
    else if(idx==8) cout<<"0 0 1 0 1";
    else if(idx==9) cout<<"0 0 0 1 1";
}