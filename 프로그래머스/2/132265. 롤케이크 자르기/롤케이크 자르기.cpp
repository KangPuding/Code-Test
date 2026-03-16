#include <string>
#include <vector>
#include <set>
#include <map>

using namespace std;

int solution(vector<int> topping) {
    
    std::set<int> Brother {};
    std::map<int,int> YBrother{};

    for (int i = 0; i < topping.size(); i++) {
        YBrother[topping[i]]++;
    }

    int nIndex = 0;
    int nResult{};

    while (nIndex < topping.size() - 1)
    {
        Brother.insert(topping[nIndex]);
        YBrother[topping[nIndex]]--;

        if (YBrother[topping[nIndex]] == 0)
            YBrother.erase(topping[nIndex]);

        if (Brother.size() == YBrother.size())
            nResult++;

        nIndex++;
    }
    
    return nResult;
}