#include <string>
#include <vector>

using namespace std;

int solution(int num) {
    int answer = 0;
    int nCount = 0;
    
    long long n = num;
    
    while(n != 1)
    {
        if(nCount >= 500)
            return -1;
        
        if(n % 2 == 0)
            n = n / 2;
        else if(n % 2 != 0)
            n = (n * 3) + 1;
        
        nCount++; 
    }

    return nCount;
}