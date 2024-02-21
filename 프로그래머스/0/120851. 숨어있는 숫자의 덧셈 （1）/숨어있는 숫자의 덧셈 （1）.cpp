#include <string>
#include <vector>

using namespace std;

int solution(string my_string) {
    int answer = 0;
    
    for(char s : my_string){
        if(48 <= s  && s  <= 57)
            answer += s - '0';
    }
    return answer;
}