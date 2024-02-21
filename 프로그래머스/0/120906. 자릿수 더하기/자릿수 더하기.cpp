#include <string>
#include <vector>

#include <iostream>

using namespace std;

int solution(int n) {
    int answer = 0;
    string m = to_string(n);
    
    for(auto c : m){
        answer += (c - '0');
    }
    
    return answer;
}