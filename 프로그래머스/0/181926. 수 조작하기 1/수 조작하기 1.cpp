#include <string>
#include <vector>

using namespace std;

int solution(int n, string control) {
    
    for(auto s : control){
        if(s == 'w')
            n += 1;
        else if (s == 's')
            n -= 1;
        else if (s == 'd')
            n += 10;
        else if (s == 'a')
            n -= 10;       
    }
    
    return n;
}