#include <iostream>
#include <vector>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cout.tie(NULL); cin.tie(NULL);
    
    int m; cin>>m;
    vector<int> v(m);
    for(int i=0;i<m;i++) cin>>v[i];

    int max=1;
    for(int i=0;i<m-1;i++){
        int j=i+1, cur=2;
        if(v[i]<v[i+1]){
            while(1){
                if(v[j]>v[j+1] || j == m-1) break;
                else if(v[j]==v[j+1]) ++j;
                else if(v[j]<v[j+1]){
                    ++cur;
                    ++j;
                }
            }
            if(max<cur) max=cur;
        }
        else if(v[i]>v[i+1]){
            while(1){
                if(v[j]<v[j+1] || j == m-1) break;
                else if(v[j]==v[j+1]) ++j;
                else if(v[j]>v[j+1]){
                    ++cur;
                    ++j;
                }
            }
            if(max<cur) max=cur;
        }
        i=j-1;
    }
    cout<<max;
}