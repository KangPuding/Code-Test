#include <string>
#include <vector>
#include <algorithm>
#include <regex>

using namespace std;

int solution(string s) {
    vector<string> numbers = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine", "ten"};
    
    int answer = 0;
    regex r;
    for(int i = 0; i < numbers.size(); i++) {
        r = numbers[i];
        s = regex_replace(s, r, to_string(i));
    }
    answer = stoi(s);
    return answer;
}