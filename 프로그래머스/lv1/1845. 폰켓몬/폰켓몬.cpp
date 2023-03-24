#include <vector>
#include <algorithm>
using namespace std;

int solution(vector<int> nums)
{
    int v_size=nums.size();
    
    sort(nums.begin(), nums.end());
    nums.erase(unique(nums.begin(), nums.end()), nums.end());
    
    int unique_v_size=nums.size();
    
    if(v_size/2<=unique_v_size) return v_size/2;
    else return unique_v_size;
}