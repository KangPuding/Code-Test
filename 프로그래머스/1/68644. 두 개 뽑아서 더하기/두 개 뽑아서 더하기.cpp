#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> numbers) {
    vector<int> answer;
    vector<int> vResult;
    
    for(int i = 0; i < numbers.size(); i++)
    {
        for(int j = i + 1; j < numbers.size(); j++)
        {
            answer.push_back(numbers[i] + numbers[j]);
        }
    }
    
    sort(answer.begin(), answer.end());
    vResult.push_back(answer[0]);
    
    for(int i = 1; i < answer.size(); i++)
    {
        if(answer[i] != answer[i - 1])
            vResult.push_back(answer[i]);
    }
    return vResult;
}