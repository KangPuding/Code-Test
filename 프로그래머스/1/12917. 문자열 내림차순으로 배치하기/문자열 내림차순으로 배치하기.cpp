#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string solution(string s) {
    string answer = "";
    
    for(int i = 0; i < s.size(); i++){
        s[i] = int(s[i]);
    }
    sort(s.begin(), s.end(), greater<int>());
    
    for(int i = 0; i < s.size(); i++){
        answer += char(s[i]);
    }
    
    return answer;
}