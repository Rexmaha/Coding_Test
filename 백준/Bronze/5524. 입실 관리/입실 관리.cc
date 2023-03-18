#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cout.tie(NULL); cin.tie(NULL);

    string s; int n;
    cin>>n;

    while(n--){
        cin>>s;
        transform(s.begin(), s.end(), s.begin(), ::tolower);
        cout<<s<<'\n';
    }
}