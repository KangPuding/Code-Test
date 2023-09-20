#include <string>
#include <vector>

using namespace std;

int solution(vector<int> numbers) {
    int result = 0;
    
    // 각 숫자를 찾았는지 여부를 저장할 변수
    for (int i = 0; i <= 9; i++) {
        bool found = false; 
        
        for (int j = 0; j < numbers.size(); j++) {
            if (numbers[j] == i) {
                found = true;
                break; 
            }
        }
        
        // 해당 숫자를 찾지 못한 경우에만 더함
        if (!found) {
            result += i;
        }
    }
    
    return result;
}