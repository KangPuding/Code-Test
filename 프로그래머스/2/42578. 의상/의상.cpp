#include <string>
#include <vector>
#include <map>

using namespace std;

int solution(vector<vector<string>> clothes) {
    
    std::map<std::string, int> clothes_map;

    for (int i = 0; i < clothes.size(); i++) {
        clothes_map[clothes[i][1]]++;
    }

    int nResult = 1;

    for (auto & clothes : clothes_map) {
        nResult *= (clothes.second + 1);
    }
    
    return nResult - 1;
}