#include <string>
#include <vector>

using namespace std;

int solution(vector<string> s1, vector<string> s2) {
    int answer = 0;
    
    for(const auto s : s1){
        for(int j = 0; j < s2.size(); j++){
            if(s == s2[j])
                answer++;
        }
    }
    return answer;
}