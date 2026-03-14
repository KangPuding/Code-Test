#include <string>
#include <vector>

using namespace std;

vector<int> solution(int num, int total) {
    
    std::vector<int> vResult;
    
    int nData = 0;
    
    for(int i = 0; i < num; i++)
        nData += i;
    
    int nStart = (total - nData) / num;

    for(int i = 0; i < num; i++)
        {
            vResult.push_back(nStart);
            nStart++;
        }
    
    
    return vResult;
    
    /* bool isTrue = true;
    int nNum = -50;

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
    
    return vResult; */
}