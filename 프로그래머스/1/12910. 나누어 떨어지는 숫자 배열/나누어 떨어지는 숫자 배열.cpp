#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> arr, int divisor) {
    vector<int> answer;
    
    for(auto s : arr){
        if(s % divisor == 0){
            answer.push_back(s);
        }
    }
    
    sort(answer.begin(), answer.end(), less<int>());
    
    if(answer.empty())
        return {-1};
    else
        return answer;
}