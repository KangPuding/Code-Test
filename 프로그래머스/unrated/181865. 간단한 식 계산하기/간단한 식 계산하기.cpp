#include <string>
#include <vector>
#include <sstream>

using namespace std;

int solution(string binomial) {
    
    stringstream ss(binomial);
    
    int answer = 0;
    int a, b;   
    char op;
    
    ss >> a >> op >> b; // ss 스트림을 이용하여 문자열에서 피연산자와 연산자를 추출   
    
    if(op == '+')
        answer = a + b;
    
    else if (op == '-')
        answer = a - b;
    
    else if (op == '*')
        answer = a * b;
    
    return answer;
}