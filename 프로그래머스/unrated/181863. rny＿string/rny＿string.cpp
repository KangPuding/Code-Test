#include <string>
#include <vector>

using namespace std;

string solution(string rny_string) {
    string answer = "";
    
for (int i = 0; i < rny_string.size(); i++) {
        if (rny_string[i] == 'm') {
            answer += "rn";  // 'm'을 'n'으로 바꿔서 answer에 추가
        } else {
            answer += rny_string[i]; // 다른 문자는 그대로 answer에 추가
        }
    }
    
    return answer;
}