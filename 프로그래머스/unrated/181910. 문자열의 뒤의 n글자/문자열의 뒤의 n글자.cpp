#include <string>
#include <vector>

using namespace std;

string solution(string my_string, int n) {
    string answer = "";
    
    for(int i = my_string.size() - n; i < my_string.size(); i++){
        answer.push_back(my_string[i]);
    }
    return answer;
}

//  return my_string.substr(my_string.length()-n);
//  substr = 해당 위치부터 문자열의 끝까지의 부분 문자열을 추출합니다.