#include <string>
#include <vector>
#include <stack>

using namespace std;

int solution(vector<int> order) {
    stack<int> container;
    int nCount = 0;
    int nIndex = 0;
    int nOrder = 1;
    bool bFind = true;
        
    while(bFind)
    {
        if(order[nIndex] == nOrder)
        {
            nCount++;
            nOrder++;
            nIndex++;
        }
        else if(!container.empty() && container.top() == order[nIndex])
        {
            container.pop();
            nCount++;
            nIndex++;
        }
        else if (nOrder <= order.size())
        {
            container.push(nOrder);
            nOrder++;
        }
        else 
            bFind = false;
    }
    
    return nCount;
}