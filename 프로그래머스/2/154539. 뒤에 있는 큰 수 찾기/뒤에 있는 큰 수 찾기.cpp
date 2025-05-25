#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> numbers) {
    int nSize = numbers.size();
    
    vector<int> answer(nSize, -1);
    vector<int> stack;
    
    for(int i = 0; i < nSize; i++)
    {
        while(!stack.empty() && numbers[stack.back()] < numbers[i])
        {
            answer[stack.back()] = numbers[i];
            stack.pop_back();
        }
        stack.push_back(i);
    }
    return answer;
}