#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> elements) {
    vector<int> Result;
    vector<int> numerical(elements.begin(), elements.end());
    numerical.insert(numerical.end(), elements.begin(), elements.end());
    
    for(int Len = 1; Len <= elements.size(); Len++)
    {
        for(int start = 0; start < elements.size(); start++)
        {
            int nSum = 0;
            for(int end = 0; end < Len; end++)
            {
                nSum += numerical[start + end];
            }
            Result.push_back(nSum);
        }
    }
    
    sort(Result.begin(), Result.end());
    auto it = unique(Result.begin(), Result.end());
    Result.erase(it, Result.end());
    
    return Result.size();
}