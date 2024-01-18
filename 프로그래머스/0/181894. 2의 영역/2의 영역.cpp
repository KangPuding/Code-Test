#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr) {
    vector<int> answer;
    int startindex = -1;
    int endindex = -1;
    
    for(int i = 0; i < arr.size(); i++){
        if(arr[i] == 2) {
            startindex = i;
            break;
        }
    }

    for(int i = startindex; i < arr.size(); i++){
        if(arr[i] == 2) {
            endindex = i;
        }
    }

        if(startindex == -1){
        return {-1}; // 빈 vector 반환
    }
    
    answer = vector<int>(arr.begin() + startindex, arr.begin() + endindex + 1);
    
    return answer;
}
