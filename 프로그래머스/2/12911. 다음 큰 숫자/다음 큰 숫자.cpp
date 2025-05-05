#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(int n) {
    int answer = 0;
    int nBackUpN = n;
    int nOneCount = 0;

    while (nBackUpN != 1)
    {
        if(nBackUpN % 2 == 1)
            nOneCount++;

        nBackUpN /= 2;
    }
    if(nBackUpN == 1)
        nOneCount++;

    int nNext = n + 1;
    int nCount = 0;
    while (nCount != nOneCount)
    {
        nCount = 0;
        int nTmp = nNext;

        while (nTmp)
        {
            if (nTmp % 2 == 1) 
                nCount++;
            
            nTmp /= 2;
        }

        if (nCount == nOneCount)
            answer = nNext;

        nNext++;
    }

    return answer;
}
