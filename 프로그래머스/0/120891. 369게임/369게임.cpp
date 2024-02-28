#include <string>
#include <vector>

using namespace std;

int solution(int order) {
    int answer = 0;
    string a = to_string(order);
    
    for(auto s : a){
        if(s == '3' || s == '6' || s == '9')
            answer++;
    }
    return answer;
}