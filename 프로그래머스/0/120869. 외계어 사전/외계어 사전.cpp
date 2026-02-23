#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<string> spell, vector<string> dic) {
    
    int nResult = 2;
    std::string Spells{};
    std::vector<bool> isCount;

    for (int i = 0; i < spell.size(); i++) {
        Spells += spell[i];
    }

    sort(Spells.begin(), Spells.end());

    for (int i = 0; i < dic.size(); i++)
    {
        if (Spells.size() == dic[i].size())
        {
            int nCount = 0;
            sort(dic[i].begin(), dic[i].end());
            for (int j = 0; j < dic[i].size(); j++)
            {
                if (Spells[j] == dic[i][j])
                    nCount++;
            }

            if (nCount == Spells.size())
                isCount.push_back(true);
        }
    }
    for (int i = 0; i < isCount.size(); i++) {
        if (isCount[i])
            nResult = 1;
    }
    
    return nResult;
}