#include <string>
#include <vector>

using namespace std;

vector<int> solution(int n, long long left, long long right) {
    
    std::vector<int> nResult{};

    for (long long i = left; i <= right; i++) {
        int row = i / n;
        int col = i % n;

        nResult.push_back(std::max(row, col) + 1);
    }
    
    return nResult;
}