#include <string>
#include <vector>
#include <queue>
#include <algorithm>

using namespace std;

int solution(vector<int> priorities, int location) {
    
std::queue<std::pair<int,int>> que;

    for (int i = 0; i < priorities.size(); i++) {
        que.push(std::make_pair(priorities[i],i));
    }

    sort(priorities.begin(), priorities.end(), std::greater<>());

    std::vector<int> vResult{};
    int nIndex = 0;
    while (!que.empty())
    {
        int nQue_Data = que.front().first;
        int nQue_Index = que.front().second;
        que.pop();

        if (priorities[nIndex] == nQue_Data)
        {
            vResult.push_back(nQue_Index);
            nIndex++;
        }
        else
            que.push(std::make_pair(nQue_Data,nQue_Index));
    }
    
    int nResult = 0;
    for (int i = 0; i < vResult.size(); i++) 
    {
        if (location == vResult[i])
            nResult = i + 1;
            
    }
    
    return nResult;
}