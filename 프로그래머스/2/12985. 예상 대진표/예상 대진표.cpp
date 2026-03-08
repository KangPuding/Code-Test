#include <iostream>

using namespace std;

int solution(int n, int a, int b)
{
    int nRoundCount = 0;
    bool isTrue = false;

    while (!isTrue)
    {
        if (a < b && (a + 1) / 2 == (b + 1) / 2)
            isTrue = true;
        else if (a > b && (b + 1) / 2 == (a + 1) / 2)
            isTrue = true;

        a = (a + 1) / 2;
        b = (b + 1) / 2;

        nRoundCount++;
    }
    
    return nRoundCount;
}