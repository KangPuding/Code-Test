#include <string>
#include <vector>
#include <algorithm>

using namespace std;

void Binary(int nData, int nBinary, std::string &Str)
{
    std::vector<int> vBinary;

    while (nData >= nBinary)
    {
        int nRemainder = nData % nBinary;
        vBinary.push_back(nRemainder);
        nData = nData / nBinary;
    }
    vBinary.push_back(nData);
    std::reverse(vBinary.begin(), vBinary.end());

    for (int i = 0; i < vBinary.size(); i++)
    {
        Str += std::to_string(vBinary[i]);
    }
}

bool PrimeN(long long nData)
{
    if (nData == 1 || nData == 0)
        return false;

    for (long long i = 2; i * i <= nData; i++)
    {
        if (nData % i == 0)
            return false;
    }
    return true;
}

int solution(int n, int k) {
    
    std::string Str{};
    std::vector<long long> vData;

    Binary(n, k, Str);

    std::string S{};
    for (int i = 0; i < Str.size(); i++)
    {
        if (Str[i] != '0')
            S += Str[i];
        else if (S != "")
        {
            vData.push_back(std::stoll(S));
            S = "";
        }
    }
    if (S != "")
        vData.push_back(std::stoll(S));

    int nCount = 0;
    for (int i = 0; i < vData.size(); i++) {
        printf("%lld ", vData[i]);
        if (PrimeN(vData[i]))
            nCount++;
    }
    
    return nCount;
}