#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr, int n) {
    vector<int> answer;
    
    // arr 홀수 = 짝수 인덱스 + n
    if(arr.size() % 2 != 0){
        for(int i = 0 ; i < arr.size(); i+=2)
            arr[i] = arr[i] + n;
    }
    
    // arr 짝수 = 홀수 인덱스 + n
    else if (arr.size() % 2 == 0){
        for(int i = 1 ; i < arr.size(); i+=2)
            arr[i] = arr[i] + n;
    }
    return arr;
}