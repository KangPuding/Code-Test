#include <string>
#include <vector>

using namespace std;

string solution(string s) {
    string answer = "";
    int nCount = 0;
    
    for(int i = 0; s[i] != '\0'; i++)
    {
        if (s[i] == ' ') {
            answer += ' ';
            nCount = 0; 
        }
        else
        {
            if(nCount % 2 == 0)
              answer += toupper(s[i]);
            else
                answer += tolower(s[i]);   
            
            nCount++;
        }
    }
    return answer;
}