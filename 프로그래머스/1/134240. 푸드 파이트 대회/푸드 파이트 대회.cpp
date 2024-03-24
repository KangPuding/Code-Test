#include <string>
#include <vector>

using namespace std;

string solution(vector<int> food) {
    
    string left = "";
    string right = "";
    int count = 0;
    
    for(int i = 1; i < food.size(); i++){
        count = food[i] / 2;
        if(count > 0) {
            for(int j = 0; j < count; j++){
                left = left + to_string(i);
                right = to_string(i) + right;
            }
        }
    }
    return left + '0' + right;
}