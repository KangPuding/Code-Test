#include <string>
#include <vector>

using namespace std;

string solution(string myString) {
    string answer;
    
    for(auto s : myString){
        if(s == 'a' || s == 'A')
            answer += 'A';
        else
            answer += tolower(s);
    }
    return answer;
}