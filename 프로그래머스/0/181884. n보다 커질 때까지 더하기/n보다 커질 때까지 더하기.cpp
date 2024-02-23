#include <string>
#include <vector>

using namespace std;

int solution(vector<int> numbers, int n) {
    int answer = 0;
    
    for(auto s : numbers){
        if(answer <= n)
            answer += s;
    }
    
    return answer;
}