#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> numlist, int n) {

        std::vector<std::pair<int,int>> items;

        for (int i = 0; i < numlist.size(); i++)
        {
            int nData = numlist[i] - n;

            if (nData < 0)
                nData *= -1;

            items.push_back(std::make_pair(nData, numlist[i]));
        }

        auto cmp = [](const std::pair<int,int>& a, const std::pair<int,int>& b) -> bool
        {
            if (a.first < b.first)
                return true;
            if (a.first > b.first)
                return false;
            
            if (a.second > b.second)
                return true;
            
            return false;
        };

        std::sort(items.begin(), items.end(), cmp);

        std::vector<int> vResult{};
        
        for (int i = 0; i < items.size(); i++)
            vResult.push_back(items[i].second);
    
    return vResult;
}