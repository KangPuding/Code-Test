#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(int k, vector<int> tangerine) {
    vector<int> nBox;
    sort(tangerine.begin(), tangerine.end());
    
    int nCurrent = tangerine[0];
    int nCount = 1;
    
    for(int i = 1; i < tangerine.size(); i++)
    {
        if(tangerine[i] == nCurrent)
            nCount++;
        else
        {
            nBox.push_back(nCount);
            nCurrent = tangerine[i];
            nCount = 1;
        }
    }
    nBox.push_back(nCount); 
    
    sort(nBox.begin(), nBox.end(), greater<int>());
    
    int nIndex = 0;
    int nSum = 0;
    
    while(nSum < k)
    {
        nSum += nBox[nIndex];
        nIndex++;
    }

    return nIndex;
}