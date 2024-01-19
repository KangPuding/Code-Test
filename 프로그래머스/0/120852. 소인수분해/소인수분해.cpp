#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(int n) {
    vector<int> answer;  
    int a = 2;  // 소인수 분해를 시작할 수

    while (n != 1) {  
        if (n % a == 0) {  
            if (find(answer.begin(), answer.end(), a) == answer.end()) 
                answer.push_back(a); 
            //벡터 answer에 중복된 소인수를 추가하지 않기 위해, find 함수로 현재의 a가 이미 벡터에 있는지 확인합니다. 
            //만약 없다면, push_back으로 추가합니다.

            n /= a;  
        }
                    else {
                        a++;  // a가 n의 소인수가 아니면 다음 수로 넘어감
                    }
                   }
    return answer;  
}
