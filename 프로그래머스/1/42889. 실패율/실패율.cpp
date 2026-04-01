#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(int N, vector<int> stages) {
    std::vector<std::pair<int,float>> vStage{};
    sort(stages.begin(), stages.end());

    int nData = 1;
    int nTotalFail = 0;

    while (nData <= N)
    {
        int nNumerator = 0;
        int nDenominator = 0;

        for (int i = 0; i < stages.size(); i++)
        {
            if (stages[i] == nData)
                nNumerator++;

            if (stages[i] >= nData)
                nDenominator++;
        }

        if (nDenominator == 0)
            vStage.push_back(std::make_pair(nData, 0));
        else
            vStage.push_back(std::make_pair(nData, (float)nNumerator / (float)nDenominator));

        nData++;
    }

    std::sort(vStage.begin(), vStage.end(), [](const std::pair<int, float>& a, const std::pair<int, float>& b) {
    if (a.second == b.second) {
        return a.first < b.first;
    }
    return a.second > b.second;
});
    
        std::vector<int> vResult{};
    
    for (int i = 0; i < vStage.size(); i++)
        vResult.push_back(vStage[i].first);
    
    return vResult;
}