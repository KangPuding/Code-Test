#include <string>
#include <vector>

using namespace std;

int solution(int a, int b) {
    
    while(true){
        if(b % 2 == 0)
            b /= 2;
        else if (b % 5 == 0)
            b /= 5;
        else
            break;
    }
    
    if(a % b == 0)
        return 1;
    else
        return 2;
}