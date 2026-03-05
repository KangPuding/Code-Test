#include <string>
#include <vector>
#include <set>

using namespace std;

vector<int> solution(vector<int> numbers) {
   
    std::set<int> numbers_set{};
    std::vector<int> vResult{};
    int nSum = 0;
    for (int i = 0; i < numbers.size(); i++)
    {
        for (int j = i + 1; j < numbers.size(); j++)
        {
            nSum = numbers[i] + numbers[j];
            numbers_set.insert(nSum);
        }
    }

    vResult.assign(numbers_set.begin(), numbers_set.end());
    
    return vResult;
}