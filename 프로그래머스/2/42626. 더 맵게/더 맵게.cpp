#include <string>
#include <vector>
#include <queue>

using namespace std;

int solution(vector<int> scoville, int K) {

    std::priority_queue<int, std::vector<int>, std::greater<int>> q;

    for (int i = 0; i < scoville.size(); i++) {
        q.push(scoville[i]);
    }

    bool isTrue = true;
    int nCount = 0;
    while (q.top() < K && isTrue)
    {
        if (q.size() >= 2)
        {
            int nMin1 = q.top();
            q.pop();
            int nMin2 = q.top();
            q.pop();
            
            int nMix = nMin1 + nMin2 * 2;
            
            q.push(nMix);
            nCount++;
        }
        else
            isTrue = false;
    }
    if(isTrue)
        return nCount;
    else
        return -1;
}