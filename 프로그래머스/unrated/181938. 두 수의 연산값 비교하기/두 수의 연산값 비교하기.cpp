#include <string>
#include <vector>

using namespace std;

int solution(int a, int b) {
    int answer = 0;
        
    string sum = to_string(a) + to_string(b);
    int mul = 2 * (a * b);
    
    if(stoi(sum) > mul)
        answer = stoi(sum);
    else
        answer = mul;
        
    
    return answer;
}