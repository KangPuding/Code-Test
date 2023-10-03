#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> numbers) {
    
    int result = 0;
    
     sort(numbers.begin(), numbers.end(), greater<int>());
    
     result = numbers[0] * numbers[1];
    
    return result;
}