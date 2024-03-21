#include <string>
#include <vector>
#include <cmath>

using namespace std;

int solution(int n) {
    int answer = 0;
    
    string s;
    
    while(true){
        s += to_string(n % 3);
        
        if(n < 3)
            break;
        else
            n = n/3;   
    }
    
    for(int i = 0; i < s.size(); i++){
        answer += pow(3,s.size()-i-1) * (s[i]-'0');
    }
    
    return answer;
}