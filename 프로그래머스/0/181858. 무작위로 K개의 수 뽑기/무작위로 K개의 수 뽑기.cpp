#include <string>
#include <vector>
#include <unordered_set>

using namespace std;

vector<int> solution(vector<int> arr, int k) {
    
    std::unordered_set<int> s;
    std::vector<int> Result{};

    for (int i = 0; i < arr.size(); i++)
    {
        if (s.size() < k) {
            auto ret = s.insert(arr[i]);
            if (ret.second) {
                Result.push_back(arr[i]);
            }
        }
    }

    if (Result.size() < k)
    {
        while (Result.size() < k) {
            Result.push_back(-1);
        }
    }
    
    return Result;
}