#include <iostream>
using namespace std;

int solution(int n)
{
    int nCount = 0;

    while (n > 0)
    {
        if (n % 2 == 0)
            n /= 2;
        else {
            n -= 1;
            nCount++;
        }
    }
    return nCount;
}