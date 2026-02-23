#include <string>
#include <vector>
#include <numeric>

using namespace std;

int solution(int balls, int share) {
    
        int nMin{};
        if (share > balls - share)
            nMin = balls - share;
        else
            nMin = share;

        long long nResult = 1;
        long long nNumerator{};
        long long nDenominator{};

        for (int i = 1; i <= nMin; i++)
        {
            nNumerator = balls - nMin + i;
            nDenominator = i;
            
            // 1차 약분 진행 (이번 항”에서 서로 공유하는 약수를 먼저 제거해서 숫자 크기를 줄이는 단계)
            int nG1 = std::gcd(nNumerator, nDenominator);
            if (nG1 != 1)
            {
                nNumerator = nNumerator / nG1;
                nDenominator = nDenominator / nG1;
            }

            // 2차 약분 진행 (목적은 분모를 최대한 없애고 곱힘)
            int nG2 = std::gcd(nResult, nDenominator);
            if (nG2 != 1)
            {
                nResult = nResult / nG2;
                nDenominator = nDenominator / nG2;
            }

            // 누적
            nResult = nResult * nNumerator;
        }
    
    return nResult;
}