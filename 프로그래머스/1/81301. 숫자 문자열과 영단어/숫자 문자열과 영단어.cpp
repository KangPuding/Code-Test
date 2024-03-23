#include <string>
#include <vector>
#include <regex>

using namespace std;

int solution(string s) {
    
    string arr[10] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    
    for(int i = 0; i < 10; i++){
        s = regex_replace(s, regex(arr[i]), to_string(i));
            // regex_replace = (바꿀 문자열이 들어있는 전체 문자열, 정규표현식을 무엇을, 무엇으로 바꿀것인지);
    }
    
    return stoi(s);
}