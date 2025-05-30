#include <string>
#include <vector>
#include <queue>

using namespace std;

int solution(vector<int> scoville, int K) {
    
    priority_queue<int, vector<int>, greater<int>> pq;
    
    for(int i = 0; i < scoville.size(); i++)
    {
        pq.push(scoville[i]);
    }
    
    int nFirst = 0;
    int nSecond = 0;
    int nResult = 0;
    int nCount = 0;
    
    while(pq.size() >= 2 && pq.top() < K)
    {
        nResult = 0;
        nFirst = pq.top();
        pq.pop();
        nSecond = pq.top();
        pq.pop();
        
        nResult = nFirst + (nSecond * 2);
        pq.push(nResult);
        nCount++;
    }
    
    if (pq.top() < K)
        return -1;

    return nCount;
}