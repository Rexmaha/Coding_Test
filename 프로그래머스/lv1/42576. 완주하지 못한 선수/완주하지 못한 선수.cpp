#include <string>
#include <vector>
#include <map>
using namespace std;
map<string, int> mp;

string solution(vector<string> participant, vector<string> completion) {
    for(int i=0;i<participant.size();i++){
        if(mp.find(participant[i])==mp.end()) mp.insert({participant[i], 1});
        else ++mp[participant[i]];
    }
    for(int i=0;i<completion.size();i++){
        --mp[completion[i]];
    }
    for(auto iter:mp){
        if(iter.second==1) return iter.first;
    }
}