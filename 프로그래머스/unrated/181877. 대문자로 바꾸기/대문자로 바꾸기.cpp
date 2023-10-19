#include <string>
#include <vector>

using namespace std;

string solution(string myString) {
    string answer = "";

    for (int i = 0; i < myString.size(); i++) {
        char c = myString[i];
        if (c >= 'a' && c <= 'z') {
            // 소문자를 대문자로 변환
            c = c - 'a' + 'A';
        }
        answer.push_back(c);
    }

    return answer;
}

// 나중에 다시 풀어볼것
