#include <string>
#include <vector>

using namespace std;

int solution(vector<int> common) {
    int nResult{};

    if ((common[1] - common[0]) == (common[2] - common[1]))
        nResult = common.back() + (common[1] - common[0]);
    else 
        nResult = common.back() * (common[1] / common[0]);
    
    return nResult;
}