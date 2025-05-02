#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = 0;
    
    for(int nIndex = 1; nIndex <= n; nIndex++)
    {
        int nSum = 0;
        for(int i = nIndex; i <= n && nSum < n; i++)
        {
            nSum += i;
            if (nSum == n) {
                answer++;
            }
        }
    }
    return answer;
}