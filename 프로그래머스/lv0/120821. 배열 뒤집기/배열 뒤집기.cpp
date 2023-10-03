#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> num_list) {

     // 배열을 뒤집는다 
     reverse(num_list.begin(), num_list.end());
    
    return num_list;
}