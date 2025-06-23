#include <string>
#include <vector>

using namespace std;

void fill(int n, int w, vector<vector<int>>& storage)
{
    int nHeight = (n + w - 1) / w;
    int nSwap = 1;
    int nData = 1;

    for (int i = 0; i < nHeight; i++)
    {
        if (nSwap == 1)
        {
            for (int j = 0; j < w && nData <= n; j++)
            {
                storage[i][j] = nData;
                nData++;
            }
        }
        else
        {
            for (int j = w - 1; j >= 0 && nData <= n; j--)
            {
                storage[i][j] = nData;
                nData++;
            }
        }
        nSwap *= -1;
    }
}

int solution(int n, int w, int num) {
    
    int nHeight = (n + w - 1) / w;
    vector<vector<int>> storage(nHeight, vector<int>(w, 0));

    fill(n, w, storage);

    int y = -1;
    int x = -1;

    for (int i = 0; i < nHeight; i++)
    {
        for (int j = 0; j < w; j++)
        {
            if (y == -1 && x == -1) 
            {
                if (storage[i][j] == num)
                {
                    y = i;
                    x = j;
                }
            }
        }
    }

    int nCount = 0;
    for (int i = nHeight - 1; i >= 0; i--)
    {
        if (storage[i][x] != 0)
            nCount++;

        if (i == y)
            i = -1;
    }

    return nCount;
}
