#include <string>
#include <algorithm>

using namespace std;

int solution(string myString, string pat) {
    
    // pat이 더 크면 0으로 반환
    if(myString.size() < pat.size())
        return 0;
    
    // 소문자로 변경
    for(int i = 0; i < myString.size(); i++){
        myString[i] = tolower(myString[i]);
    }
    // 소문자로 변경
    for(int i = 0; i < pat.size(); i++){
        pat[i] = tolower(pat[i]);
    }
    
    // 0부터 myString.size() - pat.size()까지 반복해서 찾기
    for(int i = 0; i <= myString.size() - pat.size(); i++){
        if(myString.substr(i, pat.size()) == pat)
            return 1;
    }
    
    return 0;
}
