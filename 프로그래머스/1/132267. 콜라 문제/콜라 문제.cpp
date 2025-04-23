#include <string>
#include <vector>

using namespace std;

int solution(int a, int b, int n) {
    int answer = 0;
    int nExchange = 0;
    
    while(n >= a)
    {
        nExchange = n / a;
        answer += nExchange * b;
        n = n - (nExchange * a) + (nExchange * b);
    }
    return answer;
}