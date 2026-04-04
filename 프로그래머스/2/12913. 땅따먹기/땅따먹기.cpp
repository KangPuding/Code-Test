#include <iostream>
#include <vector>
using namespace std;

int solution(vector<vector<int> > land)
{
    std::vector<std::vector<int>> DP(land.size(), std::vector<int>(land[0].size(), 0));

    DP[0][0] = land[0][0];
    DP[0][1] = land[0][1];
    DP[0][2] = land[0][2];
    DP[0][3] = land[0][3];

    for (int i = 1; i < land.size(); i++)
    {
        for (int j = 0; j < 4; j++)
        {
            int prevMax = 0;
            for (int k = 0; k < 4; k++)
            {
                if (k != j)
                {
                    prevMax = std::max(prevMax, DP[i - 1][k]);
                }
            }
            DP[i][j] = land[i][j] + prevMax;
        }
    }

    int nResult = DP[land.size() - 1][0];
    for (int i = 1; i < 4; i++) {
        if (nResult < DP[land.size() - 1][i])
            nResult = DP[land.size() - 1][i];
    }
    
    return nResult;
}