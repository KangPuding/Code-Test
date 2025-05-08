#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> array) {
    sort(array.begin(), array.end());
    
    vector<int> nValue;
    vector<int> nIndex;
    
    int nCurrent = array[0];
    int nCount = 1;
    
    for(int i = 1; i < array.size(); i++)
    {
        if(array[i] == nCurrent)
            nCount++;
        else
        {
            nValue.push_back(nCurrent);
            nIndex.push_back(nCount);
            nCurrent = array[i];
            nCount = 1;
        }
    }   
    nValue.push_back(nCurrent);
    nIndex.push_back(nCount);
    
    
    int nMax = nIndex[0];
    int nResult = nValue[0];
    bool bFind = false;
    
    for(int i = 1; i < nIndex.size(); i++)
    {
        if(nMax < nIndex[i])
        {
            nMax = nIndex[i];
            nResult = nValue[i];
            bFind = false;
        }
        else if (nIndex[i] == nMax)
            bFind = true;
    }
    
    if (bFind) 
        return -1;
        
    return nResult;
}