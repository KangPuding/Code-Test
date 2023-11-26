#include <string>
#include <vector>

using namespace std;

int solution(int order) {
    int answer = 0;
    string num = to_string(order);
    
    for (char digit : num) {
        if(digit == '3' || digit == '6' || digit == '9')
            answer += 1;
    }
    return answer;
}