#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string solution(string my_string) {
    string answer = "";
    
    for(int i = 0; i < my_string.size(); i++){
        if('A' <= my_string[i] && 'Z' >= my_string[i])
            answer.push_back(my_string[i] + 32);
        else
            answer.push_back(my_string[i]);
    }
    
     sort(answer.begin(), answer.end());
    
    return answer;
}