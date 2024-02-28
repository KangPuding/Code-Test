#include <string>
#include <vector>

using namespace std;

string solution(int age) {
    string answer = "";
    string S_a = to_string(age);
    
    for(auto s : S_a){
        answer += s + 49;
    }
    return answer;
}