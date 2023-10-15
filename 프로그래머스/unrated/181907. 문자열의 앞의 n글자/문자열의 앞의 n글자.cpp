#include <string>
#include <vector>

using namespace std;

string solution(string my_string, int n) {
    string answer = "";
    string s = my_string;
    for(int i =0; i < n; i++){
        answer.push_back(s[i]);
    }
    return answer;
}