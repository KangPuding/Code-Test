#include <string>
#include <vector>

using namespace std;

int solution(int left, int right) {
    int answer = 0;
    
    for(int i = left; i <= right; i++)
    {
        int nCount = 0;
        
        for(int j = 1; j <= i; j++)
        {
            if(i % j == 0)
                nCount++;
        }
        
        if(nCount % 2 == 0)
            answer += i;
        else
            answer -= i;
    }
    
    return answer;
}