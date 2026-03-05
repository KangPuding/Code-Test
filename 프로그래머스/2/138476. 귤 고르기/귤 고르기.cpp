#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(int k, vector<int> tangerine) {
    
    sort(tangerine.begin(), tangerine.end());
    std::vector<std::pair<int,int>> A_Count{};

    int nCount = 1;
    int nData = tangerine[0];
    for (int i = 1; i < tangerine.size() + 1; i++)
    {
        if (nData == tangerine[i])
            nCount++;
        else
        {
            A_Count.push_back(std::make_pair(nCount, nData));
            nData = tangerine[i];
            nCount = 1;
        }
    }

    sort(A_Count.begin(), A_Count.end(), std::greater<>());

    bool isTrue = true;
    int nIndex = 0;
    int nSum = 0;
    int nMinCount = 0;
    while (isTrue)
    {
        if (nSum < k)
        {
            nSum += A_Count[nIndex].first;
            nIndex++;
            nMinCount++;
        }
        else
            isTrue = false;
    }

    return nMinCount;
}