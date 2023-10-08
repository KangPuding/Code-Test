#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int result = 0;
     
    if(n % 7 == 0)
        result = n / 7;
    
    else if(n % 7 != 0)
        result = (n / 7) + 1;
    
    return result;
}