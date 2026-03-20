#include <string>
#include <vector>

using namespace std;

int dfs(int nIndex, int nSum, int *numbers, int nSize,  int nTarget) {

    if (nIndex == nSize)
    {
        if (nSum == nTarget)
            return 1;
        else
            return 0;
    }

    int nPl = dfs(nIndex + 1, nSum + numbers[nIndex], numbers, nSize, nTarget);
    int nMi = dfs(nIndex + 1, nSum - numbers[nIndex], numbers, nSize, nTarget);

    return nPl + nMi;
}

int solution(vector<int> numbers, int target) {
    
    return dfs(0,0, &numbers[0], numbers.size(),target);
    
}