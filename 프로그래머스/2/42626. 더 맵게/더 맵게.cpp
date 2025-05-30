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
    int nCount = 0;
    
    while(pq.size() >= 2 && pq.top() < K)
    {
        nFirst = pq.top();
        pq.pop();
        nSecond = pq.top();
        pq.pop();
        
        pq.push(nFirst + (nSecond * 2));
        nCount++;
    }
    
    if (pq.top() < K)
        return -1;

    return nCount;
}