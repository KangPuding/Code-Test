#include <string>
#include <vector>

using namespace std;

int solution(vector<int> num_list, int n) {
    int answer = 0;
    
    for(auto s : num_list) {
        if (s == n)
            answer = 1;
    }
    return answer;
}