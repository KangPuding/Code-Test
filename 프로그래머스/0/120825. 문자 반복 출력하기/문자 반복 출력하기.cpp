#include <string>
#include <vector>

using namespace std;

string solution(string my_string, int n) {
    string answer = "";
    
    for(auto s : my_string){
        for(int i = 1; i <= n; i++){
            answer += s;
        }
    }
    return answer;
}