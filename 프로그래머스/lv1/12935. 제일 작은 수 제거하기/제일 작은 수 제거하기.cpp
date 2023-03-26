#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> arr) {
    vector<int> ans;
    if(arr.size()==1){
        ans.push_back(-1);
        return ans;
    }
    
    int min=*min_element(arr.begin(), arr.end());
    arr.erase(remove(arr.begin(), arr.end(), min), arr.end());
    ans=arr;
    return ans;
}