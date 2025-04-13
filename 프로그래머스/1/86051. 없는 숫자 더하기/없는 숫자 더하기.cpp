#include <string>
#include <vector>

using namespace std;

int solution(vector<int> numbers) {
    int answer = -1;
    int nTotal = 0;
    
    for(int i = 0; i < numbers.size(); i++)
    {
        nTotal += numbers[i];   
    }
    
    answer = 45 - nTotal;
    
    return answer;
}