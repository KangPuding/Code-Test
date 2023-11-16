#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(string my_string) {
    vector<int> num;
    
for(int i = 0; i < my_string.size(); i++){
        if(my_string[i] >= '0' && my_string[i] <= '9'){
             num.push_back(my_string[i] - '0'); // 문자를 정수로 변환하여 저장
        }
    }
    
    sort(num.begin(), num.end(), less<int>());
    
    return num;
}