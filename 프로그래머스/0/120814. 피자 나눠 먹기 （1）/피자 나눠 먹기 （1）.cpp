#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int nQuotient{};
    int nRemainder{};
    
    nRemainder = n % 7;
    
    if(n <= 7)
        nQuotient = 1;
    else if (nRemainder == 0)
        nQuotient = n / 7;
    else
        nQuotient = n / 7 + 1;
    
    return nQuotient;
}