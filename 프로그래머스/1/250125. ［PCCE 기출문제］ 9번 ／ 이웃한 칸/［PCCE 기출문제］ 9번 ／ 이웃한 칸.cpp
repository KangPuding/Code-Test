#include <string>
#include <vector>

using namespace std;

int solution(vector<vector<string>> board, int h, int w) {
    int nCount = 0;
    int arDH[4] = {0,1,-1,0};
    int arDW[4] = {1,0,0,-1};
    
    for(int i = 0; i < 4; i++)
    {
        int h_check = h + arDH[i];
        int w_check = w + arDW[i];
        
        if(h_check >= 0 && h_check < board.size() && w_check >= 0 && w_check < board[0].size())
        {
            if(board[h][w] == board[h_check][w_check])
                nCount++;
        }
        
    }
    return nCount;
}