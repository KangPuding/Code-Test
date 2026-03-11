#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> citations) {
    
    sort(citations.begin(), citations.end());

    bool isTrue = true;
    int nIndex = 0;
    int nResult = 0;

    while (isTrue) 
    {
        if (citations[nIndex] >= citations.size() - nIndex) {
            nResult = citations.size() - nIndex;
            isTrue = false;
        }
        else
            nIndex++;
    }
    
    return nResult;
}