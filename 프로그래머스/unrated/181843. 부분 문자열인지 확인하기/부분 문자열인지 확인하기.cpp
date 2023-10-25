#include <string>
#include <vector>

using namespace std;

int solution(string my_string, string target) {
    
    // find로 my_string 내에 겹치는걸 확인
    // 없으면 string::npos 반환
    if (my_string.find(target) != string::npos)
        return 1;
    else
        return 0;
}