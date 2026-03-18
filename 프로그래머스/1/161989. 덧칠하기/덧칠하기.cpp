#include <string>
#include <vector>

using namespace std;

int solution(int n, int m, vector<int> section) {
    
    int nCount = 0;
    int nIndex = 0;

    for (int i = 0; i < section.size(); i++)
    {
        if (nIndex <= section[i] - 1)
        {
            if (section[i] - 1 + m < n)
                nIndex = section[i] - 1 + m;
            else
                nIndex = n;

            nCount++;
        }
    }

   /* std::vector<char> wall(n, 'O');

    for (int i = 0; i < section.size(); i++)
    {
        wall[section[i] - 1] = 'X';
    }

    int nIndex = 0;
    int nCount = 0;

    while (nIndex < n)
    {
        if (wall[nIndex] == 'X')
        {
            if (nIndex + m < n)
                nIndex += m;
            else
                nIndex = n - 1;

            nCount++;
        }
        else
            nIndex++;
    } */
    
    return nCount;
}