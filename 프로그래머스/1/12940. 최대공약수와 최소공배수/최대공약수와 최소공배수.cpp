#include <string>
#include <vector>
#include <iostream>

using namespace std;

vector<int> solution(int n, int m) {
    vector<int> answer;
    int a, b, r;
    
    a = m;
    b = n;
    
    while(b != 0) {
        r = a % b;  
        a = b;
        b = r;        
    }
    
    answer.push_back(a);
    answer.push_back(n * m / a);
    
    return answer;
}