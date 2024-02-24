#include <string>
#include <vector>

using namespace std;

string solution(string my_string) {
    string answer = "";
    
    for(auto s : my_string){
        if(64 < s && s < 91)
            answer += tolower(s);
        else
            answer += toupper(s);
    }
    return answer;
}