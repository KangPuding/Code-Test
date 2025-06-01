#include <string>
#include <vector>

using namespace std;

int solution(int x, int y, int n) {

    vector<int> dp(y + 1, -1);
    dp[x] = 0;
    
    for(int i = x; i <= y; i++)
    {
        if(dp[i] != -1)
        {
           int arrNext[3] = { i + n, i * 2, i * 3 };
        
            for(int j = 0; j < 3; j++)
            {
                 int nNext = arrNext[j];
            
                if (nNext <= y) 
                {
                        if (dp[nNext] == -1 || dp[nNext] > dp[i] + 1) 
                               dp[nNext] = dp[i] + 1;
                 }    
            }    
        }
    }
    
    return dp[y];
    
}