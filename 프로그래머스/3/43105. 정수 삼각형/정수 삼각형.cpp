#include <string>
#include <vector>

using namespace std;

int solution(vector<vector<int>> triangle) {
    int nSum = triangle[0][0];

    for (int i = 1; i < triangle.size(); i++)
    {
        for (int j = 0; j < triangle[i].size(); j++)
        {
            // 첫번째 일때
            if (j == 0)
            {
                triangle[i][j] += triangle[i - 1][j];
            }
            // 마지막 일떄
            else if (j == triangle[i].size() - 1)
            {
                triangle[i][j] += triangle[i - 1][j - 1];
            }
            // 나머지 일때
            else
            {
                if (triangle[i - 1][j - 1] > triangle[i - 1][j])
                    triangle[i][j] += triangle[i - 1][j - 1];
                else
                    triangle[i][j] += triangle[i - 1][j];
            }
        }
    }

    int nSize = triangle.size() - 1;
    int nMax = triangle[nSize][0];

    for (int i = 1; i < triangle[nSize].size(); i++)
    {
        if (nMax < triangle[nSize][i])
            nMax = triangle[nSize][i];
    }
    
    return nMax;
}