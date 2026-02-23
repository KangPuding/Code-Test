#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int solution(vector<int> A, vector<int> B)
{
    int nResult{};
    
    sort(A.begin(), A.end());
    sort(B.begin(), B.end(), std::greater<>());
    
    for (int i = 0; i < A.size(); i++ ) 
    {
        nResult += A[i] * B[i];
    }
    
    return nResult;
}