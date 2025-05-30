#include <iostream>
#include <vector>
using namespace std;

int solution(vector<vector<int> > land)
{
    int nY = 0;
    int nX = 0;
    
    for(nY = 1; nY < land.size(); nY++)
    {
        for (nX = 0; nX < 4; nX++)
        {
            int nMax = 0;
            for(int k = 0; k < 4; k++)
            {
                if(k != nX && nMax < land[nY -1][k])
                {
                    nMax = land[nY -1][k];
                }
            }
            land[nY][nX] += nMax;
        }
    }
    
    int nResult = 0;
    for(nX = 0; nX < 4; nX++)
    {
        if(nResult < land[land.size() - 1][nX])
            nResult = land[land.size() - 1][nX];
    }
    return nResult;
}