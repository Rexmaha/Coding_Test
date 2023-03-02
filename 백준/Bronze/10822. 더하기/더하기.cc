#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cout.tie(NULL); cin.tie(NULL);

    string s, token; cin>>s;
    stringstream ss(s);

    int sum=0;
    while(getline(ss, token, ',')) sum+=stoi(token);
    cout<<sum;
}