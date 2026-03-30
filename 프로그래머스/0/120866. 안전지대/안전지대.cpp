#include <string>
#include <vector>

using namespace std;

void Danger(std::vector<std::vector<bool>> &vDanger, int nH, int nW)
{

    for (int i = nH - 1; i <= nH + 1; i++)
    {
        for (int j = nW - 1; j <= nW + 1; j++)
        {
            if (i >= 0 && j >= 0 && i < vDanger.size() && j < vDanger[0].size())
                vDanger[i][j] = false;
        }
    }
}


int solution(vector<vector<int>> board) {
    int nHeight = board.size();
    int nWidth = board[0].size();

    std::vector<std::vector<bool>> vDanger(nHeight, std::vector<bool>(nWidth, true));

    for (int i = 0; i < nHeight; i++)
    {
        for (int j = 0; j < nWidth; j++)
        {
            if (board[i][j] == 1)
                Danger(vDanger, i, j);
        }
    }

    int nCount = 0;
    for (int i = 0; i < vDanger.size(); i++) {
        for (int j = 0; j < vDanger[i].size(); j++) {
            if (vDanger[i][j] == true)
                nCount++;
        }
    }
    
    return nCount;
}