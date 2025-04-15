#include <string>
#include <vector>

using namespace std;

string solution(int n) {
    string answer = "";
    int nCount = 0;
    while(n > nCount)
    {
        int nRemainder = nCount % 2;
        
        if(nRemainder == 0)
            answer += "수";
        else 
            answer += "박";
        
        nCount++;
    }
    return answer;
}