#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(string str1, string str2) {
    
    auto it = search(str2.begin(), str2.end(), str1.begin(), str1.end());

    // 검색 결과를 확인
    if (it != str2.end()) {
        return 1; 
    } else {
        return 0;
    }
}