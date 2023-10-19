#include <string>
#include <vector>

using namespace std;

string solution(string myString) {
    string answer = "";
    
    for (int i = 0; i < myString.size(); i++){
        char a = myString[i];
        if(a >= 'A' && a <= 'Z'){
            a = a - 'A' + 'a';
        }
        else {
            a = myString[i];
        }
        answer.push_back(a);
    }
    return answer;
}