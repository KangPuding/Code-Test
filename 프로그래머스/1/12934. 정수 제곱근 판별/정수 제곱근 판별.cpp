
#include <string>
#include <vector>

using namespace std;

long long solution(long long n) {
    long long answer = -1;
    long long nPow = 1;
    long long i;
    
    for(i = 1; i * i <= n; i++)
    {
        if(i * i == n)
            answer = (nPow +1) * (nPow +1);
        else
            nPow++;
    }
    return answer;
}