#include <string>
#include <vector>
#include <algorithm>

using namespace std;


string solution(string mystring, string letter) {
    
    string answer = mystring;

    for (char lett: letter) {
        answer.erase(remove(answer.begin(), answer.end(), lett), answer.end());
    }

    return answer;
}