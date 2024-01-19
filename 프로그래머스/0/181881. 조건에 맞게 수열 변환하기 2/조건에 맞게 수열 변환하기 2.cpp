#include <string>
#include <vector>

using namespace std;

int solution(vector<int> arr) {
    int answer = 0;
    
    
    while (true) {
         vector<int> A = arr;
    for(int i = 0; i < arr.size() - 1; i++){
        if(arr[i] >= 50 && arr[i] % 2 == 0)
          A[i] = arr[i] / 2;

        else if (arr[i] < 50 && arr[i] % 2 != 0)
           A[i] = (arr[i] * 2) + 1;
    }
        if (arr == A) {
            return answer; 
        }

        arr = A;
        answer++;

    }
}