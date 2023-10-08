#include <string>
#include <vector>

using namespace std;

int solution(int ang) {
    
    if (0 < ang && ang < 90)
        return 1;
    else if (90 == ang)
        return 2;
    else if (90 < ang && ang < 180)
        return 3;
    else if (180 == ang)
        return 4;
}