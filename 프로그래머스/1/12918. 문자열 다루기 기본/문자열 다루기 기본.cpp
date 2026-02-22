#include <string>
#include <vector>

using namespace std;

bool solution(string s) {
    bool answer = true;
    
    int nLength = s.length();
    int nCount = 0;
    
    if (nLength == 4 || nLength == 6)
    {
        for (int i = 0; i < nLength; i++)
        {
            if (48 <= s[i] && s[i] <= 57)
                nCount++;
            // 48 ~ 57
        }
    }

    if (nCount == nLength)
        answer = true;
    else
        answer = false;
    
    return answer;
}