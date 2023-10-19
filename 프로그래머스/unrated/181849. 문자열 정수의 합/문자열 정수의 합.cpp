#include <string>
#include <vector>

using namespace std;

int solution(string num_str) {
    int answer = 0;

    // num_str 문자열을 순회하면서 각 문자를 s 변수에 할당하여 처리하는 구문
    for (char s : num_str) {
        // s가 '0'에서 '9'까지의 숫자 중 하나라면, s - '0' 연산은 해당 숫자의 정수 값으로 변환됩니다
        int num = s - '0';
        answer += num;
    }

    return answer;
}
