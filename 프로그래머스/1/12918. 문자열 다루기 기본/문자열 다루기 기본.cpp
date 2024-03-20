#include <string>
#include <vector>

using namespace std;

bool solution(string s) {
    bool answer = true;
    
    for(auto n : s){
        if(64 < n && n < 91 || 96 < n && n < 123)
            answer = false;
        }
    
    
    return s.size() == 4 || s.size() == 6 ? answer : false;
}