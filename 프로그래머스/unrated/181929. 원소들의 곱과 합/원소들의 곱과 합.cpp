#include <string>
#include <vector>

using namespace std;

int solution(vector<int> num_list) {
    int sum = 0;
    int mul = 1;
    
    for(int i =0; i < num_list.size(); i++){
        sum += num_list[i];
        mul *= num_list[i];
    }
    
    sum = sum * sum;
    
    if(sum > mul)
        return 1;
    else
        return 0;
}