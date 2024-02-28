#include <string>
#include <vector>
#include <sstream>

using namespace std;

int solution(string binomial) {

    stringstream ss(binomial);
    
    int a , b ;
    char op;
    
    ss >> a >> op >> b;
    
    return op == '+' ? a + b : op == '-' ? a - b : a * b;
    
}