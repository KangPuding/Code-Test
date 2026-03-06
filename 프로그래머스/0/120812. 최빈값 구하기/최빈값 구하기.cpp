#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> array) {
    
    sort(array.begin(), array.end());

    int nData = array[0];
    int nCount = 1;

    std::vector<std::pair<int,int>> nResult;

    if (array.size() != 1)
    {
        for (int i = 1; i < array.size(); i++)
        {
            if (nData != array[i])
            {
                nResult.push_back(std::pair<int,int>(nCount,nData));
                nData = array[i];
                nCount = 1;
            }
            else
                nCount++;
        }
    }

    nResult.push_back(std::pair<int,int>(nCount,nData));
    
    sort(nResult.begin(), nResult.end(), std::greater<>());
    
    
    if (nResult[0].first == nResult[1].first)
        return -1;
    else
        return nResult[0].second;
}