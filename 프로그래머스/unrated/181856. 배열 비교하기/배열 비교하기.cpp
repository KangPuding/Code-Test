#include <string>
#include <vector>

using namespace std;

int solution(vector<int> arr1, vector<int> arr2) {
    int answer = 0;
    int Sarr1 = arr1.size();
    int Sarr2 = arr2.size();
    int A = 0;
    int B = 0;
    
    for(int i = 0; i < Sarr1; i++){
            A += arr1[i];
            B += arr2[i];
        }
    
    if(Sarr1 > Sarr2)
        answer = 1;
    else if (Sarr1 < Sarr2)
        answer = -1;
    else if (Sarr1 = Sarr2){
        if( A > B)
            answer = 1;
        else if (A < B)
            answer = -1;
        else 
            answer = 0;
    }
    return answer;
}