#include <bits/stdc++.h>
using namespace std;

vector<string> split(string input, char sep){
    vector<string> res;

    stringstream ss;
    string buffer;
    ss.str(input);

    while(getline(ss, buffer, sep)){
        res.push_back(buffer);
    }

    return res;
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int n; string s;
    cin>>n>>s;

    int ans = 0;
    while(n--){
        string item; int cnt;
        cin>>item>>cnt;
        if (item.find('_') != string::npos){
            vector<string> splitter = split(item, '_');
            for (int i = 0; i<splitter.size(); i++){
                if (splitter[i] == s){
                    ans += cnt;
                    break;
                }
            }
        }
        else{
            if (item == s) ans += cnt;
        }
    }
    cout<<ans;
}