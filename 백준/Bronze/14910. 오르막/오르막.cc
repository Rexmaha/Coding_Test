#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int num;
    vector<int> v;
    while(1){
        cin>>num;
        if(cin.eof() == 1) break;

        v.push_back(num);
    }

    vector<int> sorted=v;
    sort(sorted.begin(), sorted.end());

    for(int i=0;i<v.size();i++){
        if(sorted[i]!=v[i]){
            cout<<"Bad";
            return 0;
        }
    }
    cout<<"Good";
}