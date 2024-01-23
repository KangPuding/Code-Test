#include <string>
#include <vector>

using namespace std;

vector<int> solution(string my_string) {
    vector<int> answer(52, 0);
    
    for(char a : my_string) {
        if(a >= 'A' && a <= 'Z')
            answer[a - 'A']++;
        else if(a >= 'a' && a <= 'z')
            answer[a - 'a' + 26]++;

    }
    return answer;
}