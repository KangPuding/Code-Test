#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> numbers) {
    
    vector<int> all;
    
    for(int i = 0 ; i < numbers.size(); i++){
        for(int j = i + 1; j < numbers.size(); j++){
            all.push_back(numbers[i] + numbers[j]);
        }
    }
    
    sort(all.begin(), all.end());
    
    // 중복 제거
    all.erase(unique(all.begin(), all.end()), all.end());
    
    return all;
}
