#include <vector>
#include <iostream>
#include <unordered_set>

using namespace std;

vector<int> solution(vector<int> arr) 
{
    std::vector<int> nResult{};

    nResult.push_back(arr[0]);

    for (int i = 1; i < arr.size(); i++)
    {
        if (arr[i - 1] != arr[i])
            nResult.push_back(arr[i]);
    }
    return nResult;
}