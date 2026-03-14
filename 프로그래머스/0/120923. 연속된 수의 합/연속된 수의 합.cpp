#include <string>
#include <vector>

using namespace std;

vector<int> solution(int num, int total) {
    bool isTrue = true;
    int nNum = -100;

    while (isTrue)
    {
        int nData = 0;
        int nIndex = nNum;
        for (int i = 0; i < num; i++)
        {
            nData += nIndex;
            nIndex++;
        }

        if (nData == total)
            isTrue = false;
        else
            nNum++;
    }

    std::vector<int> vResult;
    
    for (int i = nNum; i < nNum + num; i++) {
        vResult.push_back(i);
    }
    
    return vResult;
}