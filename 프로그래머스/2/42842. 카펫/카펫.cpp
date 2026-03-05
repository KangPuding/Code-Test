#include <string>
#include <vector>

using namespace std;

vector<int> solution(int brown, int yellow) {

    int nIndex = 1;
    int nH = 0;
    int nW = 0;
    int nSum = brown + yellow;

    bool isTrue = false;

    while (!isTrue)
    {
       if (nSum % nIndex == 0)
       {
           nH = nIndex;
           nW = nSum / nIndex;

           if ((nH - 2) * (nW - 2) == yellow)
               isTrue = true;
       }
        nIndex++;
    }
    
    std::vector<int> vResult{};
    
    vResult.push_back(nW);
    vResult.push_back(nH);
    
    return vResult;
}