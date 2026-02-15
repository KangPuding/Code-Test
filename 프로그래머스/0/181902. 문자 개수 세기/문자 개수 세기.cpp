#include <string>
#include <vector>


std::vector<int> solution(std::string my_string) {

    std::vector<int> answer(52,0);

    // 미리 52개로 초기화 -> char형으로 비교 -> 각 char에 해당 인덱스 값에 증가 (a의 인덱스 : 26 / A의 인덱스 : 0)
    for (char c : my_string) {
        if (c < 'a')
            answer[c - 'A']++;  
        else
            answer[26 + c - 'a']++;
    }
      
        return answer;
}