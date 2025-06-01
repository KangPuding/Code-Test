#include <string>
#include <vector>

using namespace std;

    int arMap[101][101];

int solution(int m, int n, vector<vector<int>> puddles) {
    int answer = 0;
    
    arMap[1][1]=1;
    
    for(int i = 0; i < puddles.size(); i++)
    {
        arMap[puddles[i][1]][puddles[i][0]] = -1;
    }
    
    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= m; j++)
        {
            int nX = 0;
            int nY = 0;
            if(arMap[i][j] != -1)
            {
                if(arMap[i - 1][j] != -1)
                    nX = arMap[i - 1][j];
                if(arMap[i][j - 1] != -1)
                    nY = arMap[i][j - 1];
                
                arMap[i][j] += (nX + nY) % 1000000007;
            }
        }
    }
    return arMap[n][m];
}