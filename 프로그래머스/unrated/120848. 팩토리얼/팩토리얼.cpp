#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = 0;
    int i = 1;
    
    while (i <= n){
        
            i *= (answer + 1) ;
            answer++;
    }
    return answer - 1;
}