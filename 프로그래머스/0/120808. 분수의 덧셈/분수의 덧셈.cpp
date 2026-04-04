#include <string>
#include <vector>

using namespace std;


int GCD(int nData1, int nData2)
{
    if (nData1 % nData2 == 0)
        return nData2;
    else
        return GCD(nData2, nData1 % nData2);
}

void LCM(int nData1, int nData2, int &nResult)
{
    int nG = GCD(nData1, nData2);

    nResult = nData1 / nG * nData2;
}

vector<int> solution(int numer1, int denom1, int numer2, int denom2) {
    
    int nRDemon{};
    int nRNumer{};
    LCM(denom1, denom2, nRDemon);

    numer1 *= nRDemon / denom1;
    numer2 *= nRDemon / denom2;
    nRNumer = numer1 + numer2;

    int nG = GCD(nRDemon, nRNumer);
    
    nRDemon /= nG;
    nRNumer /= nG;

    return {nRNumer, nRDemon} ;

}