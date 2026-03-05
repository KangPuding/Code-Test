#include <string>
#include <vector>

using namespace std;

int solution(int a, int b, int n) {
    
    int nResult{};
    int nExchange{};
    int nRemain{};
    int nRecieved{};

    while (n >= a)
    {
        nExchange = n / a;
        nRemain = n % a;
        nRecieved = nExchange * b;

        nResult += nRecieved;

        n = nRecieved + nRemain;
    }
    
    return nResult;
}