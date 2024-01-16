#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr) {
    int n_l = 1;
    while (n_l < arr.size()){
        n_l *= 2;
    }
    
    vector<int> answer = arr;
    
    while(answer.size() < n_l){
        answer.push_back(0);
    }
    return answer;
}