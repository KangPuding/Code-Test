#include <vector>
#include <set>
using namespace std;

int solution(vector<int> nums) {
    
    int answer = 0;
    set<int> s;
    
    for(int i = 0; i < nums.size(); i++) {
        s.insert(nums[i]);
    }
    
    
    return s.size() <= nums.size() / 2 ? s.size() : nums.size() / 2;
}