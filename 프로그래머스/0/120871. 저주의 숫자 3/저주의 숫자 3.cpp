#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int nResult{};

    for (int i = 0; i < n; i++)
    {
        nResult++;
        bool isCursed = true;

        while (isCursed) {
            bool isRemain = (nResult % 3 == 0);
            bool has = false;
            int nTemp = nResult;
            while (nTemp > 0)
            {
                int digit = nTemp % 10;
                if (digit == 3)
                    has = true;

                nTemp = nTemp / 10;
            }

            if (isRemain || has)
                nResult++;
            else
                isCursed = false;

            printf("%d\n", nResult);
        }
    }
    printf("%d\n", nResult);
    return nResult;
}