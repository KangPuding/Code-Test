#include <string>
#include <vector>

using namespace std;

string solution(string s) {
    string answer = "";
    int nResult = s.size() / 2;
    
    if(s.size() % 2 == 0)
    {   
        answer += s[nResult -1];
        answer += s[nResult];
    }
    else
    {
        answer += s[nResult];
    }
        
    return answer;
}