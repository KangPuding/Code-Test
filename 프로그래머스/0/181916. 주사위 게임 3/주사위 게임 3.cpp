#include <string>
#include <vector>
#include <map>
#include <algorithm>

using namespace std;

int solution(int a, int b, int c, int d) {
std::map<int, int> map{};

    map[a]++;
    map[b]++;
    map[c]++;
    map[d]++;

    std::vector<std::pair<int, int>> vec{};
    int nResult{};

    for (auto it : map) {
        vec.push_back(std::pair(it.first, it.second));
    }

    sort(vec.begin(), vec.end(),
    [](const std::pair<int, int>& a, const std::pair<int, int>& b) {
        if (a.second != b.second)
            return a.second > b.second;

        return a.first < b.first;
    });


    if (vec.size() == 1)
    {
        nResult = vec[0].first * 1111;
    }
    else if (vec.size() == 2)
    {
        if (vec[0].second == 3 && vec[1].second == 1)
        {
            nResult = (10 * vec[0].first + vec[1].first) * (10 * vec[0].first + vec[1].first);
        }
        else if (vec[0].second == 2 && vec[1].second == 2)
        {
            int nabs = vec[0].first - vec[1].first;

            if (nabs < 0)
                nabs *= -1;

            nResult = (vec[0].first + vec[1].first) * nabs;
        }
    }
    else if (vec.size() == 3)
    {
        nResult = vec[1].first * vec[2].first;
    }
    else
    {
        nResult = vec[0].first;

        for (int i = 1; i < vec.size(); i++) {
            if (nResult > vec[i].first)
                nResult = vec[i].first;
        }
    }
    
    return nResult;
}