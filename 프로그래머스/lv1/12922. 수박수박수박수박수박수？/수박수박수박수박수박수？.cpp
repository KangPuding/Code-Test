#include <string>
#include <vector>

using namespace std;

string solution(int n) {
    string answer = "";
    
    for (int i = 0; i < n; i++){
        if (i % 2 == 0)
            answer.append("수");  // string의 제일 마지막에 넣는것 == uphand
            else
            answer.append("박");
    }
    
    // for(int i = 0; i < n; i++) {
    //     answer = (i % 2 == 0) ? answer.append("수") : answer.append("박");
    // }
    
    return answer;
}