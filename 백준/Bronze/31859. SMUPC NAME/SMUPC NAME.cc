#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; string name;
    cin>>n>>name;

    bool flag[26] = {false,};
    int removedChar = 0;
    for (int i=0;i<name.size();i++){
        if(!flag[name[i]-97]) {
            flag[name[i]-97] = true;
        }
        else{
            name.erase(name.begin() + i);
            --i;
            removedChar++;
        }
    }

    name+=to_string(removedChar + 4);
    name = to_string(1906+n)+name;
    reverse(name.begin(), name.end());
    name = "smupc_"+name;
    cout<<name;
}  