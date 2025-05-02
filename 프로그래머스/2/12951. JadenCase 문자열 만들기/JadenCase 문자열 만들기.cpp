#include <string>
#include <vector>

using namespace std;

string solution(string s) {
    string answer = "";
    bool bWord = true;
    
    for(int i = 0; i < s.size(); i++)
    {
        if(s[i] == ' ')
        {
            answer += ' ';
            bWord = true;
        }
        else
        {
            if(bWord)
            {
                answer += toupper(s[i]);
                bWord = false;
            }
            
            else
            {
                answer += tolower(s[i]);
            }
        }
    }
    
    return answer;
}