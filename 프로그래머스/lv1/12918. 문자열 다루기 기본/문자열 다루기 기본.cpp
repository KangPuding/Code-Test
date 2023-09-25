#include <string>
#include <vector>

using namespace std;

bool solution(string s) {

    bool answer = true;
    
    if((s.size() == 4)||(s.size() == 6))
        for(int i=0; i < s.size(); i++){
            if((s[i] < 48) || (s[i] > 57))
                answer = false;
        }
    else answer = false;
    
    return answer;

}


    // // 범위 기반 루프 (Range-based for loop)
    // // 요소를 하나씩 반복적으로 가져오는 데 사용됩니다. 
    // // char a는 각 요소를 저장할 변수이고, s는 반복할 데이터 구조 (예: 문자열)입니다.
    // for(char a:s){
    //         if ((a < 0*30) || (a > 0*39))
    //         return false;   
    // }
    // 이런 방법도 있으니 참고