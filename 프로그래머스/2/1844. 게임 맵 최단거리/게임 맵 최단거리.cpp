#include <vector>
#include <queue>
using namespace std;

int solution(vector<vector<int> > maps)
{
    std::queue<std::pair<int,int>> que;
    std::vector<std::vector<bool>> visited(maps.size(), std::vector<bool>(maps[0].size(), false));

    std::vector<int> dx{-1, 1, 0, 0};
    std::vector<int> dy{0, 0, -1, 1};

    int nX = 0;
    int nY = 0;
    que.push(std::make_pair(nX,nY));
    visited[nX][nY] = true;

    while (!que.empty())
    {
        std::pair<int,int> cur = que.front();
        que.pop();

        nX = cur.first;
        nY = cur.second;
        
        if (nX == maps.size() - 1 && nY == maps[0].size() - 1)
            return maps[nX][nY];

        for (int i = 0; i < 4; i++)
        {
            int nextX = nX + dx[i];
            int nextY = nY + dy[i];

            if (nextX >= 0 && nextX < maps.size())
            {
                if (nextY >= 0 && nextY < maps[0].size())
                {
                    if (maps[nextX][nextY] == 1)
                    {
                        if (visited[nextX][nextY] == false)
                        {
                            visited[nextX][nextY] = true;
                            maps[nextX][nextY] = maps[nX][nY] + 1;
                            que.push(std::make_pair(nextX,nextY));
                        }
                    }
                }
            }
        }
    }

    return -1;
}