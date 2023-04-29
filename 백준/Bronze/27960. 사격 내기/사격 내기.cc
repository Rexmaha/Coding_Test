#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

vector<bool> a;
vector<bool> b;

int main(){
    ios_base::sync_with_stdio(false); cout.tie(NULL); cin.tie(NULL);
    
    int aNum, bNum; cin>>aNum>>bNum;
    a=vector<bool>(10, false); b=vector<bool>(10, false);

    int i=9;
    while(i>=0){
        if(aNum>=pow(2, i)){
            a[i]=true;
            aNum-=pow(2, i);
        }
        if(bNum>=pow(2, i)){
            b[i]=true;
            bNum-=pow(2, i);
        }
        --i;
    }  

    int res=0;
    for(int i=0;i<10;i++){
        if(a[i]^b[i]) res+=pow(2, i);
    }
    cout<<res;
}