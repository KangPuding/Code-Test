#include <string>
#include <vector>

using namespace std;

string solution(string s, string skip, int index) {
    string answer = "";
    
    for(int i = 0; i < s.size(); i++)
    {
        for(int j = 0; j < index; j++)
        {
            if(s[i] == 'z')
                s[i] = 'a';
            else
                s[i] += 1;
            
            for(int w = 0; w < skip.size(); w++)
            {
                if(s[i] == skip[w])
                    j--;
            }
        }
        answer += s[i];
    }
    return answer;
}