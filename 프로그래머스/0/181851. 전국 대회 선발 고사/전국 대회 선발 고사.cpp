#include <string>
#include <vector>
#include <map>

using namespace std;

int solution(vector<int> rank, vector<bool> attendance) {

    std::map<int, int> map{};

    for (int i = 0; i < rank.size(); i++) {
        if (attendance[i]) {
            map.insert(std::pair<int, int>(rank[i], i));
        }
    }

    std::vector<int> participation{};

    for (std::map<int, int>::const_iterator it = map.begin(); it != map.end(); ++it)
    {
        participation.push_back(it->second);
    }

    return 10000 * participation[0] + 100 * participation[1] + participation[2];
}