#include <iostream>
#include <string>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cout.tie(NULL); cin.tie(NULL);
    string cip; cin>>cip;

    if(cip[1]==cip[9]) cout<<"NLCS";
    else if(cip[3]==cip[8]) cout<<"KIS";
    else if(cip[0]==cip[6]) cout<<"SJA";
    else cout<<"BHA";
}