#include <string>
#include <vector>

using namespace std;

int solution(vector<int> num_list) {
    int sum = 0;
    int mul = 1;
    
    for(auto s : num_list){
        sum += s;
        mul *= s;
    }
       sum = sum * sum;
    
    return sum > mul ? 1 : 0;
}