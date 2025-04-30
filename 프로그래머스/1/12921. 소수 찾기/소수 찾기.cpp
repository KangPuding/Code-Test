#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = 0;
    // 1 제외, 2의 배수 제외, 3의배수 제외, 5의 배수 제외, 7의 배수 제외 
    vector<bool> vPrime(n + 1, true);
    
    for(int i = 2; i * i <= n; i++)
    {
        if(vPrime[i])
        {
            for(int j = i * i; j <= n; j += i)
                vPrime[j] = false;
        }
    }
    
    for(int i = 2; i <= n; i++)
    {
        if(vPrime[i])
            answer++;
    }
    return answer;
}