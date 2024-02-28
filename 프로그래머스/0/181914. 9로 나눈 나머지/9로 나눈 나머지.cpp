#include <string>
#include <vector>

using namespace std;

int solution(string number) {
    int answer = 0;
    
    for(auto s : number){
        answer += (s - '0');
    }
    return answer % 9;
}