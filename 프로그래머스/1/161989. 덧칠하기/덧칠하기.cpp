#include <string>
#include <vector>

using namespace std;

int solution(int n, int m, vector<int> section) {

    std::vector<char> wall(n, 'O');

    for (int i = 0; i < section.size(); i++)
    {
        wall[section[i] - 1] = 'X';
    }

    int nIndex = 0;
    int nCount = 0;

    if (m == 1)
        nCount = section.size();
    else
    {
        while (nIndex < n)
        {
            if (wall[nIndex] == 'X')
            {
                if (nIndex < n - m)
                {
                    for (int i = nIndex; i < m + nIndex; i++)
                    {
                        wall[i] = 'O';
                    }
                }
                else
                {
                    for (int i = nIndex; i < n; i++)
                    {
                        wall[i] = 'O';
                    }
                }
                nCount++;
            }
            nIndex++;
        }
    }
    
    return nCount;
}