#include <string>
#include <vector>

using namespace std;

string solution(string my_string) {
    string answer = "";
    string s = my_string;
    
    for(int i = 0; i < s.size(); i++){
        if(s[i] < 97)
        s[i] += 32;
        else
        s[i] -= 32;  
    }
    
    
    return s;
}