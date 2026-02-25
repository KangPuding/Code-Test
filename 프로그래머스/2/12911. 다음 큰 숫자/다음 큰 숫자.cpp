#include <string>
#include <vector>

void BinaryCount (int nData, int &nCount)
{
    while (nData != 1) {
        if (nData % 2 == 1)
            nCount++;

        nData /= 2;
    }

    if (nData == 1)
        nCount++;
}

int solution(int n) {

    int nResult{};
    int nCount{};
    BinaryCount(n, nCount);

    int nBackUp = n;
    bool isTrue = true;

    while (isTrue)
    {
        n++;
        int UpCount{};
        BinaryCount(n, UpCount);

        if (nBackUp < n && nCount == UpCount)
            isTrue = false;

    }

    printf("%d\n", n);
    
    return n;
}
