#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> people, int limit) {
    
    sort(people.begin(), people.end(), std::greater<>());

    int nCount = 0;
    int nIndex = 0;

    while (nIndex < people.size())
    {
        int nMaxSize = people.size();

        if (people[nIndex] + people[nMaxSize - 1] <= limit)
        {
            people.pop_back();
            nIndex++;
            nCount++;
        }
        else
        {
            nIndex++;
            nCount++;
        }
    }
    
    return nCount;
}