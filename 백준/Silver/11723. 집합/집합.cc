#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

vector<int> v;

bool find_x(int x){
    auto it=find(v.begin(), v.end(), x);
    if(it==v.end()) return false;
    else return true;
}

int main(){
    ios_base::sync_with_stdio(false); cout.tie(NULL); cin.tie(NULL);

    int n; cin>>n;
    string s; int x;
    while(n--){
        cin>>s;

        if(s=="empty" || s=="all"){
            if(s=="empty") v.clear();
            else if(s=="all"){
                v.clear();
                for(int i=1;i<21;i++) v.push_back(i);
            }
        }
        else{
            cin>>x;
            if(s=="add" && !find_x(x)) v.push_back(x);
            else if(s=="remove" && find_x(x)) v.erase(remove(v.begin(), v.end(), x), v.end());
            else if(s=="check"){
                if(find_x(x)) cout<<1<<'\n';
                else cout<<0<<'\n';
            }
            else if(s=="toggle"){
                if(find_x(x)) v.erase(remove(v.begin(), v.end(), x), v.end());
                else v.push_back(x);
            }
        }
        
    }
}