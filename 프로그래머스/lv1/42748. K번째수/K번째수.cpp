#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> slice(vector<int> arr, int i, int j){
    auto f=arr.cbegin()+i;
    auto e=arr.cbegin()+j+1;
    vector<int> ret(f, e);
    return ret;
}

vector<int> solution(vector<int> array, vector<vector<int>> commands) {
    vector<int> answer;
    
    for(int idx=0;idx<commands.size();idx++){
        int i=commands[idx][0], j=commands[idx][1], k=commands[idx][2];
        vector<int> sub_vec=slice(array, i-1, j-1);
        sort(sub_vec.begin(), sub_vec.end());
        answer.push_back(sub_vec[k-1]);
    }
    
    return answer;
}