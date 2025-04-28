#include <vector>
#include <set>
using namespace std;

int solution(vector<int> nums)
{
    int answer = 0;
    set<int> s;
    
    s.insert(nums.begin(), nums.end());
    
    int nUniqueCount = s.size();         
    int nMaxPick = nums.size() / 2;      

    answer = min(nUniqueCount, nMaxPick);  
    
    return answer;
}