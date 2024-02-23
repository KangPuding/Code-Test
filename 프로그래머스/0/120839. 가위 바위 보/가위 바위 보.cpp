#include <string>
#include <vector>

using namespace std;

string solution(string rsp) {
    string answer = "";
    
    for(char s : rsp){
        if(s == '2')
            answer += '0';
        else if(s == '0')
            answer += '5';
        else
            answer += '2';
    }
    return answer;
}