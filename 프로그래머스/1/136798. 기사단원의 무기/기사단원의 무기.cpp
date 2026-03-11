#include <string>
#include <vector>

using namespace std;

int solution(int number, int limit, int power) {
    int nResult = 0;

    for (int i = 1; i <= number; i++)
    {
        int nCount = 0;
        for (int j = 1; j * j <= i; j++)
        {
            if (i % j == 0 && j * j == i)
                nCount++;
            else if (i % j == 0 && j * j != i)
                nCount += 2;
        }

        if (nCount > limit)
            nResult += power;
        else
            nResult += nCount;
    }
    
    return nResult;
}