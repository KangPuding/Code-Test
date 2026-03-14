#include <string>
#include <vector>

using namespace std;

vector<vector<int>> solution(vector<vector<int>> arr1, vector<vector<int>> arr2) {
        int nHeight = arr1.size();
    int nWidth = arr2[0].size();

    std::vector<std::vector<int>> nResult(nHeight, std::vector<int>(nWidth));

    for (int i = 0; i < nHeight; i++)
    {
        int nIndex = 0;
        int nCount = 0;

        while (nCount < nWidth) {
            int nSum = 0;
            for (int j = 0; j < arr1[0].size(); j++)
            {
                nSum += arr1[i][j] * arr2[j][nIndex];
            }
            nResult[i][nIndex] = nSum;
            nIndex++;
            nCount++;
        }
    }
    
    return nResult;
}