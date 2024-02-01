#include <string>
#include <vector>
#include <sstream>

using namespace std;

int solution(string my_string) {
    int answer = 0;
    
    stringstream s;
    s.str(my_string);
    
    s >> answer;
    
    char ch;
    int temp = 0;
    
    while(s) {
        
        if (ch == '+') 
            answer += temp;
        
        else if(ch == '-') 
            answer -= temp;
        
        s >> ch >> temp;
    }
    
    return answer;
}