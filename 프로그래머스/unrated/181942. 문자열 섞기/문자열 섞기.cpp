#include <string>
#include <vector>

using namespace std;

string solution(string str1, string str2) {
    string answer = "";
    int a = min(str1.size(), str2.size());
    
    for(int i = 0; i < a; i++){
        answer.push_back(str1[i]);
        answer.push_back(str2[i]);
    }
    return answer;
}