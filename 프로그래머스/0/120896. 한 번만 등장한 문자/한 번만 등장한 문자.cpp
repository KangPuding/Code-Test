#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string solution(string s) {
    string answer = "";
    
    sort(s.begin(), s.end());
    
    for(int i = 0; i < s.size(); i++)
    {
        // i == 0 이어도 뒷쪽 메모리에는 쓰레기 값이 들어있으므로 비교해도 된다.
        // 내가 보고 있는 char의 앞 뒤가 같지 않으면 answer에 추가
        if(s[i] != s[i + 1] && s[i] != s[i - 1])
        {
            answer += s[i];
        }
    }
    return answer;
}