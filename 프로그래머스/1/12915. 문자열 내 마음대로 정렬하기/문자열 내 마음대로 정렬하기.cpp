#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<string> solution(vector<string> strings, int n) {
     
    std::vector<std::pair<char, int>> backUp{};
    sort(strings.begin(), strings.end());

    for (int i = 0; i < strings.size(); i++)
    {
        backUp.push_back(std::make_pair(strings[i][n], i));
    }

    sort(backUp.begin(), backUp.end());

    std::vector<std::string> Result{};

    for (int i = 0 ; i < backUp.size(); i++)
    {
        Result.push_back(strings[backUp[i].second]);
    }
    
    return Result;
}