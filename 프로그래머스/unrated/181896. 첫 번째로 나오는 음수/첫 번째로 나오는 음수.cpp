#include <string>
#include <vector>

using namespace std;

int solution(vector<int> num_list) {
    int answer = -1; // 음수가 없을 경우 -1을 반환하도록 초기값을 설정

    for (int i = 0; i < num_list.size(); i++) {
        if (num_list[i] < 0) {
            answer = i;
            break; // 음수를 찾았으면 반복문을 종료합니다.
        }
    }

    return answer;
}
