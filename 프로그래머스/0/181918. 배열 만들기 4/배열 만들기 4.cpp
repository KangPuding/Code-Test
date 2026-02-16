#include <string>
#include <vector>


std::vector<int> solution(std::vector<int> arr) {
    std::vector<int> stk;
int nIndex = 0;


    while (nIndex < arr.size()) {

        if (stk.empty()) {
            stk.push_back(arr[nIndex]);
            nIndex++;
        }
        else if (stk.back() >= arr[nIndex]) {
            stk.pop_back();
        }
        else if (stk.back() < arr[nIndex]) {
            stk.push_back(arr[nIndex]);
            nIndex++;
        }
    }
    return stk;
}