#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> array) {
    
    int nLength{};
    int nResult{};
    
    sort(array.begin(), array.end(), greater<int>());
    
    nLength = array.size() / 2;
    
    nResult = array[nLength];
    
    return nResult;
}