#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> array, vector<vector<int>> commands) {
    std::vector<int> Result{};

    for (int i = 0; i < commands.size(); i++)
    {
        std::vector<int> input{};
        for (int j = commands[i][0] - 1; j < commands[i][1]; j++) 
        {
            input.push_back(array[j]);
        }
        
        sort(input.begin(), input.end());
        Result.push_back(input[commands[i][2] - 1]);
    }
    
    return Result;
}