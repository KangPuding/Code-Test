#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<string> name, vector<int> yearning, vector<vector<string>> photo) {
    
    std::vector<std::pair<std::string, int>> v{};

    for (int i = 0; i < name.size(); i++) {
        v.push_back(make_pair(name[i],yearning[i]));
    }

    std::vector<int> nResult{};

    for (int i = 0; i < photo.size(); i++)
    {
        int nCount = 0;
        for (int j = 0; j < photo[i].size(); j++)
        {
            std::string Str = photo[i][j];
            for (int k = 0; k < v.size(); k++) {
                if (Str == v[k].first)
                    nCount += v[k].second;
            }
        }
        nResult.push_back(nCount);
    }
    
    return nResult;
}