#include <string>
#include <vector>

using namespace std;

string solution(vector<string> my_strings, vector<vector<int>> parts) {
    string answer = "";
    
    // parts[i][0] : 처음 시작부분 , parts[i][1] - parts[i][0] : 마지막 부분
    // 끝에 1을 더한 이유 : 끝 인덱스 포함시키기 위함
    for(int i = 0; i < my_strings.size(); i++){
        answer += my_strings[i].substr(parts[i][0], parts[i][1] - parts[i][0] + 1);
    }
    return answer;
}