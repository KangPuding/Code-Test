#include <string>
#include <vector>

using namespace std;

int solution(int m, int n, vector<string> board) {
    int answer = 0;
    vector<pair<int, int>> Remember;
    bool bSucc = true;
    
    while(bSucc)
    {
        for(int i = 0 ; i < m - 1; i++)
        {
            for(int j = 0; j < n - 1; j++)
            {
                if(board[i][j] != '0' && board[i][j] == board[i][j+1] && board[i][j] == board[i+1][j] && board[i+1][j] == board[i+1][j+1])
                {
                    Remember.push_back(make_pair(i,j));
                }
            }
        }
    
        if(!Remember.empty())
        {
            for(int i = 0; i < Remember.size(); i++)
            {
                int nFirst = Remember[i].first;
                int nSecond = Remember[i].second;
                
                board[nFirst][nSecond] = '0';
                board[nFirst][nSecond + 1] = '0';
                board[nFirst + 1][nSecond] = '0';
                board[nFirst + 1][nSecond + 1] = '0';
            }
            Remember.clear();
    
            for(int col = 0; col < n; col++)
            {
                int writeRow = m - 1;
                for(int row = m - 1; row >= 0; row--)
                {
                    if(board[row][col] != '0')
                    {
                        board[writeRow][col] = board[row][col];
                        if(writeRow != row)
                            board[row][col] = '0';
                        
                        writeRow--;
                    }
                }
            }
        }
        else
            bSucc = false;
    
        }
    
    
    for(int i = 0 ; i < m; i++)
    {
        for(int j = 0; j < n; j++)
        {
            if(board[i][j] == '0')
                answer++;
        }
    }
    
    return answer;
}