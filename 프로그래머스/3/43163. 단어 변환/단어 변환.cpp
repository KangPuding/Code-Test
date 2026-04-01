#include <string>
#include <vector>
#include <queue>

using namespace std;

int solution(string begin, string target, vector<string> words) {
std::queue<std::pair<std::string, int>> que{};
    std::vector<bool> visited(words.size(),false);

    int nDepth = 0;
    que.push(std::make_pair(begin, 0));
    bool isTrue = false;

    while (!que.empty()&& !isTrue)
    {
        std::string Str = que.front().first;
        int Depth = que.front().second;
        que.pop();

        if (Str == target) {
            isTrue = true;
            nDepth = Depth;
        }
        else
        {
            for (int i = 0; i < words.size(); i++)
            {
                if (!visited[i])
                {
                    int nCount = 0;
                    for (int j = 0; j < words[i].size(); j++)
                    {
                        if (Str[j] != words[i][j])
                            nCount++;
                    }

                    if (nCount == 1)
                    {
                        visited[i] = true;
                        que.push(std::make_pair(words[i], Depth + 1));
                    }
                }
            }
        }
    }
    
    return nDepth;
}