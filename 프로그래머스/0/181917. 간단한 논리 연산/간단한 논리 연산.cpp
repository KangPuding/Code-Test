#include <string>
#include <vector>

using namespace std;

bool solution(bool x1, bool x2, bool x3, bool x4) {
    bool answer = true;
    bool x5 = true;
    bool x6 = true;
    
    if(x1 == true || x2 == true)
        x5 = true;
    else
        x5 = false;
    
     if(x3 == true || x4 == true)
        x6 = true;
    else
        x6 = false;
            
    if (x5 == true && x6 == true)
        answer = true;
    else
        answer = false;
    
    return answer;
}