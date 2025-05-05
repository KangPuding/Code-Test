#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = 0;
    int nLength = n;
    int arData[nLength];
    
    arData[0] = 0;
    arData[1] = 1;
    
    for(int i = 2; i <= n; i++)
    {
        arData[i] = (arData[i - 1] % 1234567)  + (arData[i - 2] % 1234567);
    }
    answer = arData[n] % 1234567;
    return answer;
}