#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    
    int nResult = 0;
    
    if(n == 1)
        return 1;
    
    if(n == 2)
        return 2;
    
    int nPrev = 1;
    int nCur = 2;
    
    for(int i = 3; i <= n; i++)
    {
        nResult = (nCur + nPrev) %  1000000007;
        nPrev = nCur;
        nCur = nResult;
    }
    
    return nResult;
}