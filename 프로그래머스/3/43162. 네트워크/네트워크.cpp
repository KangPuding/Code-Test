#include <string>
#include <vector>

using namespace std;

void DFS(int nCurrent, std::vector<bool> &visited, std::vector<std::vector<int>> &computers) {

    visited[nCurrent] = true;

    for (int i = 0; i < computers.size(); i++)
    {
        if (visited[i] == false && computers[nCurrent][i] == 1)
            DFS(i, visited, computers);
    }
}

int solution(int n, vector<vector<int>> computers) {

    std::vector<bool> visited(n,false);
    int nCount = 0;

    for (int i = 0; i < n; i++)
    {
        if (visited[i] == false)
        {
            nCount++;
            DFS(i, visited, computers);
        }
    }
    
    return nCount;
}