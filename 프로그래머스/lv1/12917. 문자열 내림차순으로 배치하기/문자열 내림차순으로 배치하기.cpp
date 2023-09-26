#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string solution(string s) {
    string answer = "";
    
    for (int i = 0; i < s.size(); i++){
        
        s[i] = int (s[i]);  // 문자를 아스키 코드로 변경
    }
    
    // 내림차순으로 정렬
    // 기본적 "s.begin(),s.end()"
    // greater<>() -> 내림차순
    // less<>() -> 오름차순
     sort(s.begin(), s.end(), greater<int>());
    
    for (int j =0; j < s.size(); j++){
        
        answer.push_back(static_cast<int>(s[j]));
        // 아스키 코드를 문자로 변환 -> static_cast<char>()
    }
    
    // string answer = "";
    // sort(s.rbegin(),s.rend());
    
    return answer;
    
    
}