#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(int k, vector<int> score) {
    std::vector<int> temple{};
    std::vector<int> Result{};

    int nLength = 0;

    for (int i = 0; i < score.size(); i++)
    {
        if (nLength < k)
        {
            temple.push_back(score[i]);
            nLength++;
        }
        else
        {
            if (temple.back() < score[i])
            {
                temple.erase(temple.begin() + k - 1);
                temple.push_back(score[i]);
            }
        }

        sort(temple.begin(), temple.end(), std::greater<int>());
        Result.push_back(temple.back());
    }
    
    return Result;
}