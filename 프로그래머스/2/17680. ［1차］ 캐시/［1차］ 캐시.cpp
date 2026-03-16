#include <string>
#include <vector>
#include <deque>

using namespace std;


int solution(int cacheSize, vector<string> cities) {
    for (int i = 0; i < cities.size(); i++)
    {
        std::string Str{};
        for (int j = 0; j < cities[i].size(); j++)
            Str += std::tolower(cities[i][j]);

        cities[i] = Str;
    }

    std::deque<std::string> Cache {};
    int nResult{};

    for (int i = 0; i < cities.size(); i++)
    {
        if (cacheSize == 0)
        {
            nResult += 5;
        }
        else
        {
            bool isBool = false;
            int j = 0;
            while (j < Cache.size() && !isBool)
            {
                if (cities[i] == Cache[j])
                {
                    Cache.erase(Cache.begin() + j);
                    Cache.push_front(cities[i]);
                    nResult += 1;
                    isBool = true;
                }
                j++;
            }
            if (!isBool)
            {
                if (Cache.empty())
                {
                    Cache.push_front(cities[i]);
                    nResult += 5;
                }
                else if (Cache.size() == cacheSize)
                {
                    Cache.pop_back();
                    Cache.push_front(cities[i]);
                    nResult += 5;
                }
                else if (Cache.size() < cacheSize)
                {
                    Cache.push_front(cities[i]);
                    nResult += 5;
                }
            }
        }
    }

    return nResult;
}