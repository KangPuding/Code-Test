#include <string>
#include <vector>

using namespace std;

int solution(string str1, string str2) {
    
    // string 클래스의 멤버함수로서, str.find("찾는 문자") 로 사용
    // 반환값은 찾는 문자의 첫번째 인덱스값
    // 찾는 문자가 없을 경우는 string::npos를 리턴한다. (npos는 no position으로 쓰레기값 나옴)

    return (str1.find(str2) == string::npos) ? 2:1;
}