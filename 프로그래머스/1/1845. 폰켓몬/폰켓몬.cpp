#include <vector>
#include <set>

using namespace std;

int solution(vector<int> nums)
{
    std::set<int> set{};
    int nNumCount = 0;
    int nResult{};

    for (int i = 0; i < nums.size(); ++i) {
        auto it = set.insert(nums[i]);

        if (it.second)
            nNumCount++;
    }
    
    if (nums.size() / 2 > nNumCount)
        nResult = nNumCount;
    else
        nResult =  nums.size() / 2;
    
    return nResult;
}