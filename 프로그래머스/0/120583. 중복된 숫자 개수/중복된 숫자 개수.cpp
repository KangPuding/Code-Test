#include <string>
#include <vector>

using namespace std;

int solution(vector<int> array, int n) {
    int answer = 0;
    
    for(auto s : array){
        if(s == n)
            answer++;
    }
    return answer;
}