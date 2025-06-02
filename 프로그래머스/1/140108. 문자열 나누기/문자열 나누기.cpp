#include <string>
#include <vector>

using namespace std;

int solution(string s) {
    int answer = 0;
    int nLength = 0;
    int nFirst = 0;
    int nSecond = 0;
    
    while(nLength < s.size())
    {
        char cFirst = s[nLength];
        nFirst = 1;
        nSecond  = 0;
        
        int i = nLength + 1;
        
        while(i < s.size() && nFirst != nSecond)
        {
            if(s[i] == cFirst)
                nFirst++;
            else
                nSecond++;
            
            i++;
        }
        
        answer++;
        nLength = i;
    }
    return answer;
}