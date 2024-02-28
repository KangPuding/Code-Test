#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = 0, c = 0;
    
    for(int i = 0; i <= n; i++){
        c = 0;
        for(int j = 1; j <= i; j++){
            if(i % j == 0)
                c++;
        }
        if(c >= 3)
            answer ++;
    }

    return answer;
}