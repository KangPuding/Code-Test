#include <string>
#include <vector>

using namespace std;

vector<vector<int>> solution(vector<vector<int>> arr1, vector<vector<int>> arr2) {
    vector<vector<int>> answer;

    int nRows = arr1.size();
    int nCols = arr2[0].size();
    int nInner = arr1[0].size(); 

    for (int i = 0; i < nRows; i++)
    {
        vector<int> row;

        for (int j = 0; j < nCols; j++) 
        {
            int nSum = 0;

            for (int k = 0; k < nInner; k++) 
            {
                nSum += arr1[i][k] * arr2[k][j];
            }
            row.push_back(nSum); 
        }
        answer.push_back(row); 
    }

    return answer;
}

