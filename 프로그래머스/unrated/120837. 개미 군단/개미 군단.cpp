#include <string>
#include <vector>

using namespace std;

// 장군개미 5 , 병정 개미 3, 일개미 1
// 여치 23 
int solution(int hp) {
    int answer = 0;

    answer += (hp / 5) + ((hp % 5) / 3) + ((hp % 5) % 3);
    
    return answer;
}