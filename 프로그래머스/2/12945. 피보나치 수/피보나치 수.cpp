#include <string>
#include <vector>

using namespace std;

int solution(int n) {

    int nResult{};
    std::vector<int> v;
    v.push_back(0);
    v.push_back(1);

    int nIndex = 2;

    while (n >= nIndex)
    {
        int nSum = (v[nIndex - 2] + v[nIndex - 1]) % 1234567;
        v.push_back(nSum);

        nIndex++;
    }
    
    nResult = v[n];
    
    return nResult;
    
}