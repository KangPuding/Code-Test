#include <string>
#include <vector>
#include <algorithm>
#include <map>

using namespace std;

vector<int> solution(string s) {


    std::map<int, int> s_map {};
    std::string Str{};

    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] != '{' && s[i] != '}')
            Str += s[i];

        if (s[i] == ',')
        {
            s_map[stoi(Str)]++;
            Str = "";
        }
    }

    s_map[stoi(Str)]++;

    std::vector<std::pair<int, int>> v(s_map.begin(), s_map.end());

    std::sort(v.begin(), v.end(),
        [](const std::pair<int, int>& a, const std::pair<int, int>& b)
        {
            if (a.second == b.second)
            {
                return a.first > b.first;
            }
            return a.second > b.second;
        });
   
    std::vector<int> vResult{};

    for (const auto& entry : v)
    {
        vResult.push_back(entry.first);
    }
    
    return vResult;
}