#include <string>
#include <vector>

using namespace std;

int solution(vector<int> sides) {
    int answer = 0;
    int a = 0;
    int b = 0;
    
    if(sides[0] > sides[1]) {
       a = sides[0] - sides[1];
       b = sides[1] + sides[0];   
    }
    else {
        a = sides[1] - sides[0];
        b = sides[0] + sides[1];  
    }
    
    return answer = b - a - 1;
}

// c < a + b 삼각형 조건