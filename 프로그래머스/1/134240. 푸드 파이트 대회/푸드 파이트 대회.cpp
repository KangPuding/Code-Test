#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string solution(vector<int> food) {
    std::string Str{};
    std::string SResult{};

    for (int i = 1; i < food.size(); i++)
    {
        int nIndex = i;
        int nCount = food[i] / 2;

        if (nCount > 0)
        {
            for (int j = 0; j < nCount; j++)
                Str += std::to_string(nIndex);
        }
    }

    SResult += Str + "0";

    reverse(Str.begin(), Str.end());

    SResult += Str;
    
    return SResult;
}