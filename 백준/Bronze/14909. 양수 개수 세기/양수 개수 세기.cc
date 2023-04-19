#include <iostream>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int num, res=0; 
    while(1){
        cin>>num;
        if(cin.eof()==1) break;
        
        if(num>0) ++res;
    }
    cout<<res;
}