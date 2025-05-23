#include <string>
#include <vector>

using namespace std;

int solution(vector<vector<int>> board) {
    int n = board.size();
    vector<vector<int>> danger = board;
    int answer = 0;
    
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            if(board[i][j] == 1)
            {
                for(int dy = -1; dy < 2; dy++)
                {
                    for(int dx = -1; dx < 2; dx++)
                    {
                        int nX = j + dx;
                        int nY = i + dy;
                        if(nY >= 0 && nY < n && nX >= 0 && nX < n)
                            danger[nY][nX] = 1;
                    }
                }
            }
        }
    }
    
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            if(danger[i][j] == 0)
                answer++;
        }
    }
    return answer;
}