#include <iostream>
#include <vector>
using namespace std;

int solution(int n, vector<int> stations, int w)
{   
    int nCount = 0;
    int nPos = 1;
    int nIndex = 0;
    
    while(nPos <= n)
    {
        if(nIndex < stations.size() && nPos >= stations[nIndex] - w)
        {
            nPos = stations[nIndex] + w + 1;
            nIndex++;
        }
        else
        {
            int nInstall = nPos + w;
            nPos = nInstall + w + 1;
            nCount++;
        }
    }
    
    return nCount;
}