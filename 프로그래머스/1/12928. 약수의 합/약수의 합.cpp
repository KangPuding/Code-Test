#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int nAnswer{};
    
    for(int i = 1; i <= n; i++)
    {
        if(n % i == 0)
            nAnswer += i;    
    }
    
    return nAnswer;
}