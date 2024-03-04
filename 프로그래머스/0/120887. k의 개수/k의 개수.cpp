#include <string>
#include <vector>

using namespace std;

int solution(int i, int j, int k) {
    int answer = 0;
    string num;
    
    for(int a = i; a <= j; a++){
        num += to_string(a);
    }
    
    for(int b = 0; b < num.size(); b++){
        if(num.substr(b, 1) == to_string(k))
            answer++;
    }
    
    return answer;
}
