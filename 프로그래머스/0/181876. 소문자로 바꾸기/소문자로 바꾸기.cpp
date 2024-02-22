#include <string>
#include <vector>

using namespace std;

string solution(string myString) {
    string answer = "";
    
    for(auto s : myString){
        if(64 < s && s < 91){
            s = tolower(s);
            answer += s;
        }
        else
            answer += s;
    }
    return answer;
}