#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<string> strArr) {
    vector<int> len(31, 0);
    
    for(int i = 0; i < strArr.size(); i++){
        len[strArr[i].size()]++;
    }
    return *max_element(len.begin(), len.end());
}