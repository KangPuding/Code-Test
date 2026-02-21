#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr, vector<vector<int>> queries) {
    
    std::vector<int> Result{};

    for (int i = 0 ; i< queries.size(); i++)
    {
        int nNum = 1000001;
        for (int j = queries[i][0]; j <= queries[i][1]; j++)
        {
            if (queries[i][2] < arr[j] && nNum > arr[j])
                nNum = arr[j];
        }
        if (nNum == 1000001)
            Result.push_back(-1);
        else
            Result.push_back(nNum);
    }

    for (int i = 0 ; i < Result.size(); i++)
        printf("%d ", Result[i]);
    
    return Result;
}