#include <cmath>

long long solution(long long n) {
    long long answer = -1;
    
    // 주어진 수 n이 양의 정수 x의 제곱인지 확인
    long long x = sqrt(n); // n의 제곱근을 구한다
    
    // x가 정수이고, n이 x의 제곱인 경우 x+1의 제곱을 반환한다
    if (x * x == n) {
        answer = (x + 1) * (x + 1);
    }
    
    return answer;
}
